
@interface NPKProtoHasActiveExternallySharedPassesResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int hasActiveExternallySharedPasses : 1; 
    }  _has;
    bool  _hasActiveExternallySharedPasses;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic) bool hasActiveExternallySharedPasses;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasHasActiveExternallySharedPasses;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasActiveExternallySharedPasses;
- (bool)hasErrorData;
- (bool)hasHasActiveExternallySharedPasses;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasActiveExternallySharedPasses:(bool)arg1;
- (void)setHasHasActiveExternallySharedPasses:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
