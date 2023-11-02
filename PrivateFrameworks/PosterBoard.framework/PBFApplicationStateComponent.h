
@interface PBFApplicationStateComponent : NSObject {
    NSString * _cachedDescription;
    unsigned long long  _cachedHash;
    <PBFStateComponentDelegate> * _delegate;
    NSString * _identifier;
    PRSServerPosterIdentity * _identity;
    NSDictionary * _userInfo;
}

@property (nonatomic) <PBFStateComponentDelegate> *delegate;
@property (retain) NSString *identifier;
@property (nonatomic, readonly) PRSServerPosterIdentity *identity;
@property (readonly) NSUUID *posterUUID;
@property (copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)initWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)initWithPRPosterConfiguration:(id)arg1;
- (id)initWithPRPosterDescriptor:(id)arg1;
- (id)initWithPRSPosterConfiguration:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithServerIdentity:(id)arg1;
- (id)posterUUID;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
