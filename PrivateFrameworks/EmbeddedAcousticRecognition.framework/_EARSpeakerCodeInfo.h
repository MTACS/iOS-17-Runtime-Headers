
@interface _EARSpeakerCodeInfo : NSObject {
    NSString * _accumulatedGradient;
    NSString * _inferenceSpeakerCode;
    bool  _isSpeakerCodeUsed;
    NSNumber * _nnetVersion;
    NSNumber * _numFrames;
    NSNumber * _recognitionOffset;
    NSNumber * _trainingOffset;
    NSString * _trainingSpeakerCode;
}

@property (nonatomic, readonly) NSString *accumulatedGradient;
@property (nonatomic, copy) NSString *inferenceSpeakerCode;
@property (nonatomic) bool isSpeakerCodeUsed;
@property (nonatomic, readonly) NSNumber *nnetVersion;
@property (nonatomic, copy) NSNumber *numFrames;
@property (nonatomic, readonly) NSNumber *recognitionOffset;
@property (nonatomic, readonly) NSNumber *trainingOffset;
@property (nonatomic, readonly) NSString *trainingSpeakerCode;

- (void).cxx_destruct;
- (id)accumulatedGradient;
- (id)inferenceSpeakerCode;
- (id)initWithLanguage:(id)arg1;
- (bool)isSpeakerCodeUsed;
- (id)nnetVersion;
- (id)numFrames;
- (id)recognitionOffset;
- (void)setInferenceSpeakerCode:(id)arg1;
- (void)setIsSpeakerCodeUsed:(bool)arg1;
- (void)setNumFrames:(id)arg1;
- (id)trainingOffset;
- (id)trainingSpeakerCode;

@end
