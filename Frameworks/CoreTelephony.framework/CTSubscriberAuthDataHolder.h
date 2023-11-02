
@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding> {
    NSDictionary * _dict;
}

@property (nonatomic, retain) NSDictionary *dict;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)dict;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDict:(id)arg1;

@end
