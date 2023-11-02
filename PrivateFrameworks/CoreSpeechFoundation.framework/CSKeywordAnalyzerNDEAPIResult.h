
@interface CSKeywordAnalyzerNDEAPIResult : NSObject {
    unsigned long long  _bestEnd;
    float  _bestScore;
    unsigned long long  _bestStart;
    bool  _isEarlyDetect;
    bool  _isSecondChance;
    unsigned long long  _samplesFed;
}

@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) bool isEarlyDetect;
@property (nonatomic) bool isSecondChance;
@property (nonatomic) unsigned long long samplesFed;

- (unsigned long long)bestEnd;
- (float)bestScore;
- (unsigned long long)bestStart;
- (id)dictionary;
- (id)init;
- (id)initWithBlob:(id)arg1 isEarlyDetected:(bool)arg2;
- (bool)isEarlyDetect;
- (bool)isSecondChance;
- (unsigned long long)samplesFed;
- (void)setBestEnd:(unsigned long long)arg1;
- (void)setBestScore:(float)arg1;
- (void)setBestStart:(unsigned long long)arg1;
- (void)setIsEarlyDetect:(bool)arg1;
- (void)setIsSecondChance:(bool)arg1;
- (void)setSamplesFed:(unsigned long long)arg1;

@end
