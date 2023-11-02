
@interface _EARRecognitionMetrics : NSObject <NSCopying> {
    NSMutableArray * _allItnRunIntervals;
    bool  _isEmojiDisambiguationUsed;
    bool  _isEmojiExpectedButNotRecognized;
    bool  _isEmojiPersonalizationUsed;
    NSNumber * _itnDurationInNs;
    NSArray * _pauseDurations;
    NSArray * _recognizedEmojis;
    struct weak_ptr<quasar::SpeechRecognizer> { 
        struct SpeechRecognizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recognizer;
}

@property (nonatomic, copy) NSMutableArray *allItnRunIntervals;
@property (nonatomic, readonly) bool isEmojiDisambiguationUsed;
@property (nonatomic, readonly) bool isEmojiExpectedButNotRecognized;
@property (nonatomic, readonly) bool isEmojiPersonalizationUsed;
@property (nonatomic, readonly) NSNumber *itnDurationInNs;
@property (nonatomic, readonly, copy) NSArray *pauseDurations;
@property (nonatomic, readonly, copy) NSArray *recognizedEmojis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addEmojiRecognitionMetrics:(id)arg1 recognizedEmojis:(id)arg2;
- (void)addItnRunIntervals:(id)arg1;
- (void)addPauseDurationMetric;
- (id)allItnRunIntervals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRecognizer:(struct shared_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isEmojiDisambiguationUsed;
- (bool)isEmojiExpectedButNotRecognized;
- (bool)isEmojiPersonalizationUsed;
- (id)itnDurationInNs;
- (id)pauseDurations;
- (id)recognizedEmojis;
- (void)setAllItnRunIntervals:(id)arg1;

@end
