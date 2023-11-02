
@interface CBDiscoverySummary : NSObject <CUXPCCodable> {
    double  _scanTime;
}

@property (nonatomic) double scanTime;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (double)scanTime;
- (void)setScanTime:(double)arg1;

@end
