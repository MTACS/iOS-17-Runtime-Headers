
@interface CPLRampingRequestResource : PBCodable <NSCopying> {
    struct { 
        unsigned int numRequested : 1; 
    }  _has;
    long long  _numRequested;
    NSString * _resource;
}

@property (nonatomic) bool hasNumRequested;
@property (nonatomic, readonly) bool hasResource;
@property (nonatomic) long long numRequested;
@property (nonatomic, retain) NSString *resource;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumRequested;
- (bool)hasResource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)numRequested;
- (bool)readFrom:(id)arg1;
- (id)resource;
- (void)setHasNumRequested:(bool)arg1;
- (void)setNumRequested:(long long)arg1;
- (void)setResource:(id)arg1;
- (void)writeTo:(id)arg1;

@end
