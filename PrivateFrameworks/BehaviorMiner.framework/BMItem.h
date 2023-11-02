
@interface BMItem : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _absoluteSupport;
    NSString * _normalizedValue;
    BMItemType * _type;
}

@property (nonatomic) unsigned long long absoluteSupport;
@property (nonatomic, readonly, copy) NSString *normalizedValue;
@property (nonatomic, readonly) BMItemType *type;
@property (nonatomic, readonly, copy) NSString *uniformIdentifier;
@property (nonatomic, readonly, copy) id value;

+ (id)itemWithType:(id)arg1 UUIDValue:(id)arg2;
+ (id)itemWithType:(id)arg1 numberValue:(id)arg2;
+ (id)itemWithType:(id)arg1 stringValue:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)absoluteSupport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 normalizedValue:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2 absoluteSupport:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)normalizedValue;
- (void)setAbsoluteSupport:(unsigned long long)arg1;
- (id)type;
- (id)uniformIdentifier;
- (id)value;

@end
