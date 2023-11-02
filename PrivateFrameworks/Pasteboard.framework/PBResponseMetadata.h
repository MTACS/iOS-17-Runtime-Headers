
@interface PBResponseMetadata : NSObject <NSSecureCoding> {
    bool  _authorizationAdmonished;
    unsigned long long  _authorizationMachAbsoluteEndTime;
    unsigned long long  _authorizationMachAbsoluteStartTime;
}

@property (getter=isAuthorizationAdmonished, nonatomic, readonly) bool authorizationAdmonished;
@property (nonatomic, readonly) unsigned long long authorizationMachAbsoluteEndTime;
@property (nonatomic, readonly) unsigned long long authorizationMachAbsoluteStartTime;

+ (bool)supportsSecureCoding;

- (unsigned long long)authorizationMachAbsoluteEndTime;
- (unsigned long long)authorizationMachAbsoluteStartTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthorizationStartTime:(unsigned long long)arg1 authorizationEndTime:(unsigned long long)arg2 authorizationAdmonished:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthorizationAdmonished;

@end
