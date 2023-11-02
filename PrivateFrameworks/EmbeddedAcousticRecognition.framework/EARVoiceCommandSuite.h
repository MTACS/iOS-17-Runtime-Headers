
@interface EARVoiceCommandSuite : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _commandSpecs;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSSet *commandSpecs;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commandSpecs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 commands:(id)arg2;
- (id)initWithPlistJSONDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plistJSONDictionary;

@end
