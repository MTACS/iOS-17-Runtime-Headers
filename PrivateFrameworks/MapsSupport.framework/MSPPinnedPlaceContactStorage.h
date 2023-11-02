
@interface MSPPinnedPlaceContactStorage : PBCodable <NSCopying> {
    NSString * _contactIdentifier;
    NSString * _handleValue;
    NSString * _labeledValueIdentifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *handleValue;
@property (nonatomic, readonly) bool hasContactIdentifier;
@property (nonatomic, readonly) bool hasHandleValue;
@property (nonatomic, readonly) bool hasLabeledValueIdentifier;
@property (nonatomic, retain) NSString *labeledValueIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handleValue;
- (bool)hasContactIdentifier;
- (bool)hasHandleValue;
- (bool)hasLabeledValueIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labeledValueIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setHandleValue:(id)arg1;
- (void)setLabeledValueIdentifier:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
