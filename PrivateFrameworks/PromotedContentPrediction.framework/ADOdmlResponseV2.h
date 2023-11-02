
@interface ADOdmlResponseV2 : PBCodable <NSCopying> {
    NSMutableArray * _features;
    struct { 
        unsigned int odmlEnabled : 1; 
    }  _has;
    bool  _odmlEnabled;
}

@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic) bool hasOdmlEnabled;
@property (nonatomic) bool odmlEnabled;

+ (Class)featuresType;

- (void).cxx_destruct;
- (void)addFeatures:(id)arg1;
- (void)clearFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)features;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (bool)hasOdmlEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)odmlEnabled;
- (bool)readFrom:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setHasOdmlEnabled:(bool)arg1;
- (void)setOdmlEnabled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
