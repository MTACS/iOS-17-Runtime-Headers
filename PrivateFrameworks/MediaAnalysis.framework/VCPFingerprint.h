
@interface VCPFingerprint : NSObject {
    NSString * _adjusted;
    NSString * _master;
}

@property (readonly) NSString *adjusted;
@property (readonly) NSString *master;

+ (id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2;

- (void).cxx_destruct;
- (id)adjusted;
- (id)description;
- (id)init;
- (id)initWithMaster:(id)arg1 adjusted:(id)arg2;
- (bool)isEqualToFingerprint:(id)arg1;
- (id)master;

@end
