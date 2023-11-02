
@interface MXAudioAnalytics : PBCodable <NSCopying> {
    NSMutableArray * _acousticFeatures;
    NSMutableArray * _speechRecognitionFeatures;
}

@property (nonatomic, retain) NSMutableArray *acousticFeatures;
@property (nonatomic, retain) NSMutableArray *speechRecognitionFeatures;

+ (Class)acousticFeaturesType;
+ (Class)speechRecognitionFeaturesType;

- (void).cxx_destruct;
- (id)acousticFeatures;
- (id)acousticFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)acousticFeaturesCount;
- (void)addAcousticFeatures:(id)arg1;
- (void)addSpeechRecognitionFeatures:(id)arg1;
- (void)clearAcousticFeatures;
- (void)clearSpeechRecognitionFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAcousticFeatures:(id)arg1;
- (void)setSpeechRecognitionFeatures:(id)arg1;
- (id)speechRecognitionFeatures;
- (id)speechRecognitionFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)speechRecognitionFeaturesCount;
- (void)writeTo:(id)arg1;

@end
