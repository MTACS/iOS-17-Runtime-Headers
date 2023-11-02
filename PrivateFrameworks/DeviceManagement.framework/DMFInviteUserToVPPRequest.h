
@interface DMFInviteUserToVPPRequest : DMFTaskRequest {
    NSURL * _URL;
    NSString * _originator;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *originator;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originator;
- (void)setOriginator:(id)arg1;
- (void)setURL:(id)arg1;

@end
