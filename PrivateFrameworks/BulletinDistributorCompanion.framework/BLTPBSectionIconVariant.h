
@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {
    unsigned int  _format;
    struct { 
        unsigned int precomposed : 1; 
    }  _has;
    NSData * _imageData;
    bool  _precomposed;
    NSString * _systemImageName;
}

@property (nonatomic) unsigned int format;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic) bool hasPrecomposed;
@property (nonatomic, readonly) bool hasSystemImageName;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) bool precomposed;
@property (nonatomic, retain) NSString *systemImageName;

+ (id)sectionIconVariantWithImageData:(id)arg1 systemImageName:(id)arg2 precomposed:(bool)arg3 format:(unsigned int)arg4;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)format;
- (bool)hasImageData;
- (bool)hasPrecomposed;
- (bool)hasSystemImageName;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)precomposed;
- (bool)readFrom:(id)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setHasPrecomposed:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setPrecomposed:(bool)arg1;
- (void)setSystemImageName:(id)arg1;
- (id)systemImageName;
- (void)writeTo:(id)arg1;

@end
