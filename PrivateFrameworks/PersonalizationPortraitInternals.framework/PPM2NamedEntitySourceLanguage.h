
@interface PPM2NamedEntitySourceLanguage : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    int  _algorithm;
    NSString * _detectedLanguage;
    int  _donationSource;
    struct { 
        unsigned int algorithm : 1; 
        unsigned int donationSource : 1; 
        unsigned int languageCount : 1; 
    }  _has;
    unsigned int  _languageCount;
    NSString * _systemLanguage;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic) int algorithm;
@property (nonatomic, retain) NSString *detectedLanguage;
@property (nonatomic) int donationSource;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic, readonly) bool hasDetectedLanguage;
@property (nonatomic) bool hasDonationSource;
@property (nonatomic) bool hasLanguageCount;
@property (nonatomic, readonly) bool hasSystemLanguage;
@property (nonatomic) unsigned int languageCount;
@property (nonatomic, retain) NSString *systemLanguage;

- (void).cxx_destruct;
- (int)StringAsAlgorithm:(id)arg1;
- (int)StringAsDonationSource:(id)arg1;
- (id)activeTreatments;
- (int)algorithm;
- (id)algorithmAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detectedLanguage;
- (id)dictionaryRepresentation;
- (int)donationSource;
- (id)donationSourceAsString:(int)arg1;
- (bool)hasActiveTreatments;
- (bool)hasAlgorithm;
- (bool)hasDetectedLanguage;
- (bool)hasDonationSource;
- (bool)hasLanguageCount;
- (bool)hasSystemLanguage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)languageCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setDetectedLanguage:(id)arg1;
- (void)setDonationSource:(int)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasDonationSource:(bool)arg1;
- (void)setHasLanguageCount:(bool)arg1;
- (void)setLanguageCount:(unsigned int)arg1;
- (void)setSystemLanguage:(id)arg1;
- (id)systemLanguage;
- (void)writeTo:(id)arg1;

@end
