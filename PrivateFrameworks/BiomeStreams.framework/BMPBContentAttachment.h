
@interface BMPBContentAttachment : PBCodable <NSCopying> {
    NSString * _filename;
    NSString * _path;
    NSString * _type;
}

@property (nonatomic, retain) NSString *filename;
@property (nonatomic, readonly) bool hasFilename;
@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filename;
- (bool)hasFilename;
- (bool)hasPath;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (bool)readFrom:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
