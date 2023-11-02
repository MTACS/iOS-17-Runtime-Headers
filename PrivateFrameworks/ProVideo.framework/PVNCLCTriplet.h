
@interface PVNCLCTriplet : NSObject {
    struct __CFString { } * _colorPrimary;
    int  _hgColorPrimary;
    int  _hgTransferFunction;
    int  _hgYCbCrMatrix;
    struct __CFString { } * _transferFunction;
    struct __CFString { } * _ycbcrMatrix;
}

@property (nonatomic, readonly) struct __CFString { }*colorPrimary;
@property (nonatomic, readonly) int hgColorPrimary;
@property (nonatomic, readonly) int hgTransferFunction;
@property (nonatomic, readonly) int hgYCbCrMatrix;
@property (nonatomic, readonly) struct __CFString { }*transferFunction;
@property (nonatomic, readonly) struct __CFString { }*ycbcrMatrix;

- (struct __CFString { }*)colorPrimary;
- (int)hgColorPrimary;
- (int)hgTransferFunction;
- (int)hgYCbCrMatrix;
- (id)initWithColorPrimaryStr:(struct __CFString { }*)arg1 hgColorPrimary:(int)arg2 transferFunctionStr:(struct __CFString { }*)arg3 hgTransformFunction:(int)arg4 ycbcrMatrixStr:(struct __CFString { }*)arg5 hgYCbCrMatrix:(int)arg6;
- (bool)isInvalid;
- (struct __CFString { }*)transferFunction;
- (struct __CFString { }*)ycbcrMatrix;

@end
