
@interface ICASReferralData : NSObject <AADataEventType> {
    NSString * _referringApplication;
    NSString * _referringInboundUrl;
}

@property (nonatomic, readonly) NSString *referringApplication;
@property (nonatomic, readonly) NSString *referringInboundUrl;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithReferringApplication:(id)arg1 referringInboundUrl:(id)arg2;
- (id)referringApplication;
- (id)referringInboundUrl;
- (id)toDict;

@end
