
@interface BluetoothAddressMonitor : NSObject {
    CBPeripheralManager * _cbManager;
    NSObject<OS_dispatch_queue> * _queue;
    struct OpaqueFigCFWeakReferenceHolder { } * _systemInfoWeak;
}

- (void)dealloc;
- (id)initWithSystemInfo:(struct OpaqueAPReceiverSystemInfo { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; id x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; struct OpaqueAPAdvertiserInfo {} *x10; unsigned char x11; unsigned char x12; struct __CFBoolean {} *x13; unsigned char x14[6]; unsigned char x15[16]; struct __CFString {} *x16; unsigned char x17; unsigned char x18; unsigned char x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned char x22; unsigned char x23; struct __CFString {} *x24; unsigned char x25; unsigned char x26; struct __CFString {} *x27; unsigned char x28; struct __CFString {} *x29; unsigned char x30; struct __CFString {} *x31; struct __CFString {} *x32; struct __CFString {} *x33; unsigned char x34; unsigned char x35; unsigned char x36; struct __CFDictionary {} *x37; long long x38; int x39; struct __CFString {} *x40; struct __CFString {} *x41; unsigned char x42; struct __CFString {} *x43; struct __CFString {} *x44; struct __CFString {} *x45; unsigned char x46; unsigned char x47; }*)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
