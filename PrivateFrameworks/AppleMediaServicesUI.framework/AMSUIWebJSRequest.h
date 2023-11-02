
@interface AMSUIWebJSRequest : NSObject <NSSecureCoding> {
    NSString * _logKey;
    NSDictionary * _options;
    NSString * _service;
}

@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, readonly) NSString *service;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1 logKey:(id)arg2;
- (id)logKey;
- (id)options;
- (id)service;
- (void)setLogKey:(id)arg1;
- (void)setOptions:(id)arg1;

@end
