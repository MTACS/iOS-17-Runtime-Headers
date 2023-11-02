
@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    NSString * _assetId;
    NSString * _experimentId;
    struct { 
        unsigned int retrievalStatusCode : 1; 
    }  _has;
    bool  _hasAssetId;
    bool  _hasExperimentId;
    int  _retrievalStatusCode;
}

@property (nonatomic, copy) NSString *assetId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasAssetId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasRetrievalStatusCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int retrievalStatusCode;

- (void).cxx_destruct;
- (id)assetId;
- (void)deleteAssetId;
- (void)deleteExperimentId;
- (void)deleteRetrievalStatusCode;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasAssetId;
- (bool)hasExperimentId;
- (bool)hasRetrievalStatusCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)retrievalStatusCode;
- (void)setAssetId:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasAssetId:(bool)arg1;
- (void)setHasExperimentId:(bool)arg1;
- (void)setHasRetrievalStatusCode:(bool)arg1;
- (void)setRetrievalStatusCode:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
