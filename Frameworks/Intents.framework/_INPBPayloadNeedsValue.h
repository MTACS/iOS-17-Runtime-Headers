
@interface _INPBPayloadNeedsValue : PBCodable <NSCopying, NSSecureCoding, _INPBPayloadNeedsValue> {
    struct { }  _has;
    NSArray * _promptItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *promptItems;
@property (nonatomic, readonly) unsigned long long promptItemsCount;
@property (readonly) Class superclass;

+ (Class)promptItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPromptItems:(id)arg1;
- (void)clearPromptItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)promptItems;
- (id)promptItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promptItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setPromptItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
