
@interface TBError : NSError

+ (id)fetchMissingParametersErrorWithUserInfo:(id)arg1;
+ (id)fetchUnsupportedErrorWithUserInfo:(id)arg1;
+ (id)responseErrorWithUserInfo:(id)arg1;

- (id)initWithType:(long long)arg1 userInfo:(id)arg2;

@end
