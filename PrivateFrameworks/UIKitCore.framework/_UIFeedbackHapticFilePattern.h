
@interface _UIFeedbackHapticFilePattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackFilePlayable_Internal> {
    NSURL * _fileURL;
    bool  _highPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (readonly) Class superclass;

+ (id)feedbackPatternFromFile:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)fileURL;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;

@end
