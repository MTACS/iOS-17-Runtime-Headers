
@interface VCPBSpotlightPair : PBCodable <NSCopying> {
    unsigned long long  _spotlightHash;
    NSString * _workflowID;
}

@property (nonatomic) unsigned long long spotlightHash;
@property (nonatomic, retain) NSString *workflowID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSpotlightHash:(unsigned long long)arg1;
- (void)setWorkflowID:(id)arg1;
- (unsigned long long)spotlightHash;
- (id)workflowID;
- (void)writeTo:(id)arg1;

@end
