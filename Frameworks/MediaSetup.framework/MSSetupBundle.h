
@interface MSSetupBundle : NSObject <NSSecureCoding> {
    NSUUID * _homeID;
    NSUUID * _homeUserID;
}

@property (nonatomic, retain) NSUUID *homeID;
@property (nonatomic, retain) NSUUID *homeUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)homeID;
- (id)homeUserID;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeID:(id)arg1 homeUserID:(id)arg2;
- (void)setHomeID:(id)arg1;
- (void)setHomeUserID:(id)arg1;

@end
