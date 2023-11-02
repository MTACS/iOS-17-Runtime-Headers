
@interface SensorKitSupport.SRStreamBlock : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  streamBlock;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)dictionary;
- (id)init;
- (id)initWithBinaryRep:(id)arg1;

@end
