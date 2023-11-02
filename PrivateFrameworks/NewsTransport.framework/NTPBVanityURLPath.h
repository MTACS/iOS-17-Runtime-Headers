
@interface NTPBVanityURLPath : PBCodable <NSCopying> {
    NSString * _destinationParameters;
    NSString * _destinationPath;
    NSString * _sourcePath;
}

@property (nonatomic, retain) NSString *destinationParameters;
@property (nonatomic, retain) NSString *destinationPath;
@property (nonatomic, readonly) bool hasDestinationParameters;
@property (nonatomic, retain) NSString *sourcePath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationParameters;
- (id)destinationPath;
- (id)dictionaryRepresentation;
- (bool)hasDestinationParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationParameters:(id)arg1;
- (void)setDestinationPath:(id)arg1;
- (void)setSourcePath:(id)arg1;
- (id)sourcePath;
- (void)writeTo:(id)arg1;

@end
