
@interface SNRemixAggregateResult : NSObject {
    float  _ambienceGain;
    float  _ambienceLoudness;
    float  _dialogueGain;
    float  _dialogueLoudness;
    float  _recordingLoudness;
}

@property (nonatomic, readonly) float ambienceGain;
@property (nonatomic, readonly) float ambienceLoudness;
@property (nonatomic, readonly) float dialogueGain;
@property (nonatomic, readonly) float dialogueLoudness;
@property (nonatomic, readonly) float recordingLoudness;

- (float)ambienceGain;
- (float)ambienceLoudness;
- (float)dialogueGain;
- (float)dialogueLoudness;
- (float)recordingLoudness;

@end
