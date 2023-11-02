
@interface DMFEnableLostModeRequest : DMFTaskRequest {
    NSString * _footnote;
    NSString * _message;
    NSString * _phoneNumber;
}

@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *phoneNumber;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)footnote;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)phoneNumber;
- (void)setFootnote:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPhoneNumber:(id)arg1;

@end
