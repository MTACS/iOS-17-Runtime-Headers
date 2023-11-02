
@interface APActivationPayload : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
}

@property (nonatomic, readonly) NSURL *URL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (void)confirmAcquiredInRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
