
@interface CLPLocationProcessingPipelineMetadata : PBCodable <NSCopying> {
    CLPConsolidation * _consolidation;
    CLPPrivacySanitization * _privacySanitization;
}

@property (nonatomic, retain) CLPConsolidation *consolidation;
@property (nonatomic, readonly) bool hasConsolidation;
@property (nonatomic, readonly) bool hasPrivacySanitization;
@property (nonatomic, retain) CLPPrivacySanitization *privacySanitization;

- (void).cxx_destruct;
- (id)consolidation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConsolidation;
- (bool)hasPrivacySanitization;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)privacySanitization;
- (bool)readFrom:(id)arg1;
- (void)setConsolidation:(id)arg1;
- (void)setPrivacySanitization:(id)arg1;
- (void)writeTo:(id)arg1;

@end
