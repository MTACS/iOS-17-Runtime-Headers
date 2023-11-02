
@interface PKSiriIntentsConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _supportedCarKeyIntents;
}

@property (nonatomic, copy) NSArray *supportedCarKeyIntents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setSupportedCarKeyIntents:(id)arg1;
- (id)supportedCarKeyIntents;

@end
