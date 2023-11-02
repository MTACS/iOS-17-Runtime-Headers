
@interface ATXTimeEventSource : NSObject <NSSecureCoding> {
    NSString * _bundleId;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 bundleId:(id)arg2 url:(id)arg3;
- (long long)type;
- (id)url;

@end
