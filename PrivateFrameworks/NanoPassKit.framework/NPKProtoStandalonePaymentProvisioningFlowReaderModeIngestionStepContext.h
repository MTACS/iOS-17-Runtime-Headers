
@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying> {
    struct { 
        unsigned int ingestionProgress : 1; 
        unsigned int ingestionState : 1; 
    }  _has;
    float  _ingestionProgress;
    int  _ingestionState;
    NSString * _physicalCardImageURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) bool hasIngestionProgress;
@property (nonatomic) bool hasIngestionState;
@property (nonatomic, readonly) bool hasPhysicalCardImageURL;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) float ingestionProgress;
@property (nonatomic) int ingestionState;
@property (nonatomic, retain) NSString *physicalCardImageURL;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (int)StringAsIngestionState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIngestionProgress;
- (bool)hasIngestionState;
- (bool)hasPhysicalCardImageURL;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (float)ingestionProgress;
- (int)ingestionState;
- (id)ingestionStateAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)physicalCardImageURL;
- (bool)readFrom:(id)arg1;
- (void)setHasIngestionProgress:(bool)arg1;
- (void)setHasIngestionState:(bool)arg1;
- (void)setIngestionProgress:(float)arg1;
- (void)setIngestionState:(int)arg1;
- (void)setPhysicalCardImageURL:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

@end
