
@interface MTLCaptureDescriptor : NSObject <NSCopying> {
    id  _captureObject;
    long long  _destination;
    NSURL * _outputURL;
}

@property (nonatomic, retain) id captureObject;
@property (nonatomic) long long destination;
@property (nonatomic, copy) NSURL *outputURL;

- (id)captureObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)destination;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)outputURL;
- (void)setCaptureObject:(id)arg1;
- (void)setDestination:(long long)arg1;
- (void)setOutputURL:(id)arg1;

@end
