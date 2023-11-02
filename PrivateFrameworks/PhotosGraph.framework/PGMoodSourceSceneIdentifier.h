
@interface PGMoodSourceSceneIdentifier : NSObject {
    bool  _isDistributed;
    bool  _isHighConfidence;
    NSString * _moodIdentifier;
}

@property bool isDistributed;
@property bool isHighConfidence;
@property (retain) NSString *moodIdentifier;

- (void).cxx_destruct;
- (bool)isDistributed;
- (bool)isHighConfidence;
- (id)moodIdentifier;
- (void)setIsDistributed:(bool)arg1;
- (void)setIsHighConfidence:(bool)arg1;
- (void)setMoodIdentifier:(id)arg1;

@end
