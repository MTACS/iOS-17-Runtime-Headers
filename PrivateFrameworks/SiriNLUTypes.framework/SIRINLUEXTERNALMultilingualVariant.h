
@interface SIRINLUEXTERNALMultilingualVariant : PBCodable <NSCopying> {
    struct { 
        unsigned int languageVariantScore : 1; 
    }  _has;
    NSString * _languageVariantName;
    double  _languageVariantScore;
}

@property (nonatomic, readonly) bool hasLanguageVariantName;
@property (nonatomic) bool hasLanguageVariantScore;
@property (nonatomic, retain) NSString *languageVariantName;
@property (nonatomic) double languageVariantScore;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageVariantName;
- (bool)hasLanguageVariantScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageVariantName;
- (double)languageVariantScore;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLanguageVariantScore:(bool)arg1;
- (void)setLanguageVariantName:(id)arg1;
- (void)setLanguageVariantScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end
