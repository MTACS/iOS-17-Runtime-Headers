
@interface _MRVideoThumbnailProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int time : 1; 
    }  _has;
    NSData * _imageData;
    double  _time;
}

@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic) bool hasTime;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) double time;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageData;
- (bool)hasTime;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (void)writeTo:(id)arg1;

@end
