
@interface CPSWebRequest : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _callbackScheme;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *callbackScheme;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)callbackScheme;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 callbackScheme:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
