
@interface PKProtobufShippingMethod : PBCodable <NSCopying> {
    long long  _amount;
    PKProtobufCustomPrecisionAmount * _customPrecisionAmount;
    NSString * _detail;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _label;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (nonatomic, retain) NSString *detail;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasCustomPrecisionAmount;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPrecisionAmount;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasCustomPrecisionAmount;
- (bool)hasDetail;
- (bool)hasIdentifier;
- (bool)hasLabel;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(long long)arg1;
- (void)setCustomPrecisionAmount:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
