
@interface ATXShortcutsEditorSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol> {
    bool  _isLastSession;
    unsigned long long  _numStepsInShortcutAtEnd;
    unsigned long long  _numStepsInShortcutAtStart;
    bool  _stepWasManuallyAdded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLastSession;
@property (nonatomic) unsigned long long numStepsInShortcutAtEnd;
@property (nonatomic) unsigned long long numStepsInShortcutAtStart;
@property (nonatomic) bool stepWasManuallyAdded;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumStepsInShortcutAtStart:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXShortcutsEditorSessionMetadata:(id)arg1;
- (bool)isLastSession;
- (unsigned long long)numStepsInShortcutAtEnd;
- (unsigned long long)numStepsInShortcutAtStart;
- (void)setIsLastSession:(bool)arg1;
- (void)setNumStepsInShortcutAtEnd:(unsigned long long)arg1;
- (void)setNumStepsInShortcutAtStart:(unsigned long long)arg1;
- (void)setStepWasManuallyAdded:(bool)arg1;
- (bool)stepWasManuallyAdded;

@end
