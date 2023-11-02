
@interface _INPBCondition : PBCodable <NSCopying, NSSecureCoding, _INPBCondition> {
    int  _conditionalOperator;
    struct { 
        unsigned int conditionalOperator : 1; 
    }  _has;
}

@property (nonatomic) int conditionalOperator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConditionalOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (int)StringAsConditionalOperator:(id)arg1;
- (int)conditionalOperator;
- (id)conditionalOperatorAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConditionalOperator;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionalOperator:(int)arg1;
- (void)setHasConditionalOperator:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
