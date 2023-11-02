
@interface FCNewsletterSubscribeCommand : FCCommand {
    NSArray * _includeArray;
    NSString * _newsletter;
}

@property (nonatomic, copy) NSArray *includeArray;
@property (nonatomic, copy) NSString *newsletter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)includeArray;
- (id)initWithCoder:(id)arg1;
- (id)initWithNewsletter:(id)arg1 includeArray:(id)arg2;
- (id)newsletter;
- (void)setIncludeArray:(id)arg1;
- (void)setNewsletter:(id)arg1;

@end
