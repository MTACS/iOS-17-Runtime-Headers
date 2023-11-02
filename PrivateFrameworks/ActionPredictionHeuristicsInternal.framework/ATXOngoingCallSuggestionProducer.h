
@interface ATXOngoingCallSuggestionProducer : NSObject {
    <ATXContextHeuristicsEnvironment> * _environment;
}

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)arg1;
- (id)suggestionWithContact:(id)arg1 score:(double)arg2;
- (id)suggestionsForOngoingCall:(id)arg1;

@end
