
@interface HSFigCaptureStream : HSCMBaseObject {
    HSFigCaptureDevice * _device;
    struct OpaqueFigCaptureStream { } * _underlyingStream;
}

@property (nonatomic, readonly) HSFigCaptureDevice *device;
@property (nonatomic, readonly) struct OpaqueFigCaptureStream { }*underlyingStream;

+ (id)statusDescription:(int)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (unsigned long long)hash;
- (id)initWithCaptureStream:(struct OpaqueFigCaptureStream { }*)arg1 fromDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStream:(id)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;
- (struct OpaqueFigCaptureStream { }*)underlyingStream;
- (id)valueForKey:(id)arg1;

@end
