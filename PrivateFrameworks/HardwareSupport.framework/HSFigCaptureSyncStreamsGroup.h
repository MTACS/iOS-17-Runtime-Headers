
@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject {
    HSFigCaptureDevice * _device;
    struct OpaqueFigCaptureSynchronizedStreamsGroup { } * _underlyingSyncStreamsGroup;
}

@property (nonatomic, readonly) HSFigCaptureDevice *device;
@property (nonatomic, readonly) struct OpaqueFigCaptureSynchronizedStreamsGroup { }*underlyingSyncStreamsGroup;

+ (id)statusDescription:(int)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (unsigned long long)hash;
- (id)initWithCaptureSyncStreamsGroup:(struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)arg1 fromDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStreamsGroup:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2 error:(id*)arg3;
- (id)streams:(id*)arg1;
- (struct OpaqueFigCaptureSynchronizedStreamsGroup { }*)underlyingSyncStreamsGroup;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(struct __CFString { }*)arg1 error:(id*)arg2;

@end
