
@interface CSKeywordAnalyzerNDAPIResult : NSObject <NSCopying> {
    unsigned long long  _bestEnd;
    unsigned long long  _bestPhrase;
    float  _bestScore;
    unsigned long long  _bestStart;
    bool  _isEarlyWarning;
    bool  _isRescoring;
    unsigned long long  _phId;
    unsigned long long  _samplesAtFire;
    unsigned long long  _samplesFed;
    unsigned long long  _startSampleCount;
}

@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) bool isEarlyWarning;
@property (nonatomic) bool isRescoring;
@property (nonatomic) unsigned long long phId;
@property (nonatomic) unsigned long long samplesAtFire;
@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long startSampleCount;

- (unsigned long long)bestEnd;
- (unsigned long long)bestPhrase;
- (float)bestScore;
- (unsigned long long)bestStart;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)init;
- (bool)isEarlyWarning;
- (bool)isRescoring;
- (unsigned long long)phId;
- (unsigned long long)samplesAtFire;
- (unsigned long long)samplesFed;
- (void)setBestEnd:(unsigned long long)arg1;
- (void)setBestPhrase:(unsigned long long)arg1;
- (void)setBestScore:(float)arg1;
- (void)setBestStart:(unsigned long long)arg1;
- (void)setIsEarlyWarning:(bool)arg1;
- (void)setIsRescoring:(bool)arg1;
- (void)setPhId:(unsigned long long)arg1;
- (void)setSamplesAtFire:(unsigned long long)arg1;
- (void)setSamplesFed:(unsigned long long)arg1;
- (void)setStartSampleCount:(unsigned long long)arg1;
- (unsigned long long)startSampleCount;

@end
