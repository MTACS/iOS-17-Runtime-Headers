
@interface EDAMAuthenticationRequestResult : FATObject {
    NSNumber * _result;
    NSString * _userEmail;
    NSNumber * _userId;
}

@property (nonatomic, retain) NSNumber *result;
@property (nonatomic, retain) NSString *userEmail;
@property (nonatomic, retain) NSNumber *userId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)result;
- (void)setResult:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userEmail;
- (id)userId;

@end
