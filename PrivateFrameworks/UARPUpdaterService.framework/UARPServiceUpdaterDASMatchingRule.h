
@interface UARPServiceUpdaterDASMatchingRule : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSDictionary * _matchingDictionary;
}

@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *matchingDictionary;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 matchingDictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)matchingDictionary;

@end
