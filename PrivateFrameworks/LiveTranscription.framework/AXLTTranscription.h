
@interface AXLTTranscription : NSObject {
    NSArray * _nonUpdatingSegments;
    SFSpeechRecognitionTask * _task;
    SFTranscription * _transcription;
}

@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, retain) NSArray *nonUpdatingSegments;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, retain) SFSpeechRecognitionTask *task;
@property (nonatomic, readonly, copy) NSString *taskIdentifier;
@property (nonatomic, retain) SFTranscription *transcription;

- (void).cxx_destruct;
- (bool)_shouldUseNonUpdatingSegments;
- (id)formattedString;
- (id)initWithRecognitionTask:(id)arg1 transcription:(id)arg2 previousTranscription:(id)arg3;
- (id)nonUpdatingSegments;
- (id)segments;
- (void)setNonUpdatingSegments:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTranscription:(id)arg1;
- (id)task;
- (id)taskIdentifier;
- (id)transcription;

@end
