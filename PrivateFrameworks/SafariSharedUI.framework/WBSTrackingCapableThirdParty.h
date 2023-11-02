
@interface WBSTrackingCapableThirdParty : NSObject {
    NSString * _domain;
    NSArray * _firstParties;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSArray *firstParties;

- (void).cxx_destruct;
- (id)domain;
- (id)firstParties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDomain:(id)arg1 firstParties:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
