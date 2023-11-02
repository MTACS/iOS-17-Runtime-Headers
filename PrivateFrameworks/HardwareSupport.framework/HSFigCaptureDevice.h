
@interface HSFigCaptureDevice : HSCMBaseObject {
    struct OpaqueFigCaptureDevice { } * _underlyingDevice;
}

@property (nonatomic, readonly) struct OpaqueFigCaptureDevice { }*underlyingDevice;

+ (id)statusDescription:(int)arg1;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCaptureDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
- (bool)invalidate:(id*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)relinquishControlOfStreams:(id)arg1 error:(id*)arg2;
- (bool)requestControlOfStreams:(id)arg1 error:(id*)arg2;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2 error:(id*)arg3;
- (id)streams:(id*)arg1;
- (id)synchronizedStreamsGroups:(id*)arg1;
- (struct OpaqueFigCaptureDevice { }*)underlyingDevice;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(struct __CFString { }*)arg1 error:(id*)arg2;

@end
