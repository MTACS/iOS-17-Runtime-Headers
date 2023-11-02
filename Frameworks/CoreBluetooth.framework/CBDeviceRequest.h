
@interface CBDeviceRequest : NSObject <CUXPCCodable> {
    unsigned int  _requestFlags;
    double  _timeoutSeconds;
}

@property (nonatomic) unsigned int requestFlags;
@property (nonatomic) double timeoutSeconds;

- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (unsigned int)requestFlags;
- (void)setRequestFlags:(unsigned int)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (double)timeoutSeconds;

@end
