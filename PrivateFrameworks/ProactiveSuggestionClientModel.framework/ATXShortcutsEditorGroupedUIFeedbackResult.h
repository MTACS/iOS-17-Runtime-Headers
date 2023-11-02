
@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <ATXProtoBufWrapper, NSSecureCoding> {
    ATXPBContextualActionsGroupedUIFeedbackResult * _proto;
}

@property (nonatomic) unsigned long long numManuallyAddedSteps;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numShortcutsAtStart;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)arg1;
- (bool)isValid;
- (id)jsonDict;
- (unsigned long long)numManuallyAddedSteps;
- (unsigned long long)numShortcutsAtEnd;
- (unsigned long long)numShortcutsAtStart;
- (id)proto;
- (void)setNumManuallyAddedSteps:(unsigned long long)arg1;
- (void)setNumShortcutsAtEnd:(unsigned long long)arg1;
- (void)setNumShortcutsAtStart:(unsigned long long)arg1;

@end
