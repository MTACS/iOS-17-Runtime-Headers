
@interface ENTextMessage : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _embeddedURLs;
    NSURL * _ensTestVerificationURL;
    NSString * _message;
    NSString * _testVerificationCode;
    ENRegion * _testVerificationRegion;
}

@property (nonatomic, copy) NSArray *embeddedURLs;
@property (nonatomic, copy) NSURL *ensTestVerificationURL;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *signature;
@property (nonatomic, copy) NSString *testVerificationCode;
@property (nonatomic, copy) ENRegion *testVerificationRegion;
@property (nonatomic, readonly, copy) NSString *verificationString;

+ (bool)supportsSecureCoding;
+ (id)textMessageWithMessage:(id)arg1 embeddedURLs:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)embeddedURLs;
- (void)encodeWithCoder:(id)arg1;
- (id)ensTestVerificationURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 embeddedURLs:(id)arg2;
- (id)message;
- (void)setEmbeddedURLs:(id)arg1;
- (void)setEnsTestVerificationURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTestVerificationCode:(id)arg1;
- (void)setTestVerificationRegion:(id)arg1;
- (id)signature;
- (id)testVerificationCode;
- (id)testVerificationRegion;
- (id)verificationString;

@end
