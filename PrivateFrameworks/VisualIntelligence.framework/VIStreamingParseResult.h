
@interface VIStreamingParseResult : NSObject {
    NSArray * _detectedObjects;
}

@property (nonatomic, readonly, copy) NSArray *detectedObjects;

- (void).cxx_destruct;
- (id)detectedObjects;
- (id)initWithDetectedObjects:(id)arg1;

@end
