
@interface NSSLogTransferProgressMsg : PBCodable <NSCopying> {
    struct { 
        unsigned int progress : 1; 
    }  _has;
    NSString * _path;
    unsigned long long  _progress;
}

@property (nonatomic, readonly) bool hasPath;
@property (nonatomic) bool hasProgress;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) unsigned long long progress;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPath;
- (bool)hasProgress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (unsigned long long)progress;
- (bool)readFrom:(id)arg1;
- (void)setHasProgress:(bool)arg1;
- (void)setPath:(id)arg1;
- (void)setProgress:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
