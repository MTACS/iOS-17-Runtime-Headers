
@interface MSUserAccountInfo : NSObject <NSSecureCoding> {
    NSString * _homeUserID;
    NSString * _sharedUserID;
}

@property (nonatomic, readonly, copy) NSString *homeUserID;
@property (nonatomic, readonly, copy) NSString *sharedUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeUserID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeUserID:(id)arg1 sharedUserID:(id)arg2;
- (id)sharedUserID;

@end
