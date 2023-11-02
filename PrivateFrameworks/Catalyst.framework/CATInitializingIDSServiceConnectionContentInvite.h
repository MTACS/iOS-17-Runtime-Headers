
@interface CATInitializingIDSServiceConnectionContentInvite : NSObject <CATInitializingIDSServiceConnectionMessageContent> {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (long long)contentType;
- (id)dictionaryValue;
- (id)init;
- (id)initWithUserInfo:(id)arg1;
- (id)userInfo;

@end
