
@interface EDAMPlainCredential : FATObject {
    NSString * _password;
    NSNumber * _userId;
}

@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSNumber *userId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end
