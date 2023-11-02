
@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _matchingDictionary;
    NSString * _xpcEventStream;
}

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *matchingDictionary;
@property (readonly) NSString *xpcEventStream;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 xpcEventStream:(id)arg2 matchingDictionary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)matchingDictionary;
- (const char *)transportDescription;
- (id)xpcEventStream;

@end
