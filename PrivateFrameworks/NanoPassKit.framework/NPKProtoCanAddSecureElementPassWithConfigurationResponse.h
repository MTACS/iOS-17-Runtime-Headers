
@interface NPKProtoCanAddSecureElementPassWithConfigurationResponse : PBCodable <NSCopying> {
    bool  _canAddPass;
    NSData * _errorData;
    struct { 
        unsigned int canAddPass : 1; 
    }  _has;
}

@property (nonatomic) bool canAddPass;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic) bool hasCanAddPass;
@property (nonatomic, readonly) bool hasErrorData;

- (void).cxx_destruct;
- (bool)canAddPass;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasCanAddPass;
- (bool)hasErrorData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCanAddPass:(bool)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasCanAddPass:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
