
@interface PKApplicationMessageActionURL : PKApplicationMessageAction <NSSecureCoding> {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

+ (id)createWithSensitiveURL:(id)arg1;
+ (id)createWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)url;

@end
