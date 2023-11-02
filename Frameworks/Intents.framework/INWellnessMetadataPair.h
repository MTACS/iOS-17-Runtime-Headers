
@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding> {
    NSString * _key;
    NSNumber * _numberValue;
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1 key:(id)arg2;
- (id)initWithString:(id)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)numberValue;
- (id)stringValue;

@end
