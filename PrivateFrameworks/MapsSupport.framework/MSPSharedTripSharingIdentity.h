
@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding> {
    NSArray * _aliases;
    NSString * _handle;
    NSString * _name;
    bool  _validAccount;
}

@property (nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *name;
@property (getter=hasValidAccount, nonatomic, readonly) bool validAccount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aliases;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (bool)hasValidAccount;
- (id)initWithCoder:(id)arg1;
- (id)initWithValidAccount:(bool)arg1 name:(id)arg2 handle:(id)arg3 aliases:(id)arg4;
- (id)name;

@end
