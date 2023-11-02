
@interface CTODAPlan : CTPlan {
    NSString * _gid1;
    NSString * _gid2;
    NSString * _handoffToken;
    bool  _inBuddy;
    NSString * _mcc;
    NSString * _mnc;
    NSString * _setupURL;
}

@property (nonatomic, readonly) NSString *gid1;
@property (nonatomic, readonly) NSString *gid2;
@property (nonatomic, readonly) NSString *handoffToken;
@property (nonatomic, readonly) bool inBuddy;
@property (nonatomic, readonly) NSString *mcc;
@property (nonatomic, readonly) NSString *mnc;
@property (nonatomic, readonly) NSString *setupURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gid1;
- (id)gid2;
- (id)handoffToken;
- (bool)inBuddy;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupUrl:(id)arg1 mcc:(id)arg2 mnc:(id)arg3 gid1:(id)arg4 gid2:(id)arg5 handoffToken:(id)arg6 inBuddy:(bool)arg7;
- (bool)isEqual:(id)arg1;
- (id)mcc;
- (id)mnc;
- (id)setupURL;

@end
