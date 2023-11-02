
@interface MTBinaryFilterLegacy : NSObject <MTBinaryFilterProtocol> {
    NSURL * _bundleURL;
    id  _cfBundle;
    int (* _createBinaryFilter;
    struct _MTBinaryFilter { int (*x1)(); int (*x2)(); int (*x3)(); } * _legacyFilter;
    unsigned int  _maxFrameSize;
    id  _mtDevice;
}

@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, retain) id cfBundle;
@property (nonatomic) int (*createBinaryFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _MTBinaryFilter { int (*x1)(); int (*x2)(); int (*x3)(); }*legacyFilter;
@property (nonatomic, readonly) unsigned int maxFrameSize;
@property (nonatomic) id mtDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleURL;
- (id)cfBundle;
- (int (*)createBinaryFilter;
- (void)dealloc;
- (void)filterFrame:(char **)arg1 size:(unsigned int*)arg2 maxSize:(unsigned int*)arg3 extraFrame:(id /* block */)arg4;
- (id)initFromURL:(id)arg1 device:(struct __MTDevice { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; unsigned int x2; unsigned int x3; bool x4; struct __MTActuator {} *x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; struct __CFString {} *x23; struct { bool x_24_1_1; bool x_24_1_2; } x24; bool x25; bool x26; bool x27; bool x28; bool x29; bool x30; unsigned int x31; unsigned int x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; bool x40; char *x41; double x42; struct __ALGLibraryState {} *x43; unsigned int x44; unsigned long long x45; unsigned char x46; unsigned int x47; long long x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned short x53; bool x54; int x55; int x56; struct MTSensorRegion { unsigned char x_57_1_1; unsigned char x_57_1_2; unsigned char x_57_1_3; unsigned char x_57_1_4; unsigned char x_57_1_5; unsigned char x_57_1_6; union { unsigned char x_7_2_1; unsigned char x_7_2_2; } x_57_1_7; } x57[20]; }*)arg2;
- (id)initWithInfo:(id)arg1;
- (struct _MTBinaryFilter { int (*x1)(); int (*x2)(); int (*x3)(); }*)legacyFilter;
- (unsigned int)maxFrameSize;
- (id)mtDevice;
- (void)reset;
- (void)setBundleURL:(id)arg1;
- (void)setCfBundle:(id)arg1;
- (void)setCreateBinaryFilter:(int (*)arg1;
- (void)setLegacyFilter:(struct _MTBinaryFilter { int (*x1)(); int (*x2)(); int (*x3)(); }*)arg1;
- (void)setMtDevice:(id)arg1;

@end
