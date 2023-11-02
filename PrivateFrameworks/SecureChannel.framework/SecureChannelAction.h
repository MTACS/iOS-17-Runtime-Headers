
@interface SecureChannelAction : NSObject <NSSecureCoding> {
    NSString * _message;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)message;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)title;
- (id)url;

@end
