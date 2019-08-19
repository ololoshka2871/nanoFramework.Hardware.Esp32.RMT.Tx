//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "nanoFramework_Hardware_Esp32_RMT_Tx.h"
#include "Transmitter.h"

using namespace nanoFramework::Hardware::Esp32::RMT::Tx;


HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeDispose___STATIC__VOID__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        Transmitter::NativeDispose( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeGetClockDiv___STATIC__U1__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        unsigned char retVal = Transmitter::NativeGetClockDiv( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_UINT8( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeGetTransmitIdleLevel___STATIC__BOOLEAN__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool retVal = Transmitter::NativeGetTransmitIdleLevel( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_bool( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeInit___STATIC__I4__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        signed int retVal = Transmitter::NativeInit( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeIsSource80MHz___STATIC__BOOLEAN__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool retVal = Transmitter::NativeIsSource80MHz( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_bool( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeIsTransmitIdleEnabled___STATIC__BOOLEAN__I4( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool retVal = Transmitter::NativeIsTransmitIdleEnabled( param0, hr );
        NANOCLR_CHECK_HRESULT( hr );
        SetResult_bool( stack, retVal );

    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSendData___STATIC__VOID__I4__SZARRAY_U1( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        CLR_RT_TypedArray_UINT8 param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_UINT8_ARRAY( stack, 1, param1 ) );

        Transmitter::NativeSendData( param0, param1, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSetCarierMode___STATIC__VOID__I4__BOOLEAN__U2__U2__BOOLEAN( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_bool( stack, 1, param1 ) );

        unsigned short param2 = stack.ArgN( 2 ).NumericByRef().u2;
        //NANOCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 2, param2 ) );

        unsigned short param3 = stack.ArgN( 3 ).NumericByRef().u2;
        //NANOCLR_CHECK_HRESULT( Interop_Marshal_UINT16( stack, 3, param3 ) );

        bool param4;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_bool( stack, 4, param4 ) );

        Transmitter::NativeSetCarierMode( param0, param1, param2, param3, param4, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSetClockDiv___STATIC__VOID__I4__U1( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        unsigned char param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_UINT8( stack, 1, param1 ) );

        Transmitter::NativeSetClockDiv( param0, param1, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSetSource80MHz___STATIC__VOID__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_bool( stack, 1, param1 ) );

        Transmitter::NativeSetSource80MHz( param0, param1, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSetTransmitIdleEnabled___STATIC__VOID__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_bool( stack, 1, param1 ) );

        Transmitter::NativeSetTransmitIdleEnabled( param0, param1, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_Hardware_Esp32_RMT_Tx_nanoFramework_Hardware_Esp32_RMT_Tx_Transmitter::NativeSetTransmitIdleLevel___STATIC__VOID__I4__BOOLEAN( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER(); hr = S_OK;
    {
        signed int param0;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 0, param0 ) );

        bool param1;
        NANOCLR_CHECK_HRESULT( Interop_Marshal_bool( stack, 1, param1 ) );

        Transmitter::NativeSetTransmitIdleLevel( param0, param1, hr );
        NANOCLR_CHECK_HRESULT( hr );
    }
    NANOCLR_NOCLEANUP();
}