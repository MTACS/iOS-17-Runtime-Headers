
@interface _WKPublicKeyCredentialParameters : NSObject {
    NSNumber * _algorithm;
}

@property (nonatomic, copy) NSNumber *algorithm;

- (id)algorithm;
- (void)dealloc;
- (id)initWithAlgorithm:(id)arg1;
- (void)setAlgorithm:(id)arg1;

@end
