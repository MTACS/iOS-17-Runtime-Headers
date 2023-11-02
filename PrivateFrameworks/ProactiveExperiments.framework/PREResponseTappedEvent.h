
@interface PREResponseTappedEvent : NSObject {
    bool  _hasQuestionMark;
    int  _inputMethod;
    PREResponsesGeneratedEvent * _responsesGeneratedEvent;
    NSNumber * _selectedPosition;
    NSString * _selectedResponse;
    unsigned long long  _timeToTap;
}

@property (nonatomic) bool hasQuestionMark;
@property (nonatomic) int inputMethod;
@property (nonatomic, retain) PREResponsesGeneratedEvent *responsesGeneratedEvent;
@property (nonatomic, retain) NSNumber *selectedPosition;
@property (nonatomic, retain) NSString *selectedResponse;
@property (nonatomic) unsigned long long timeToTap;

- (void).cxx_destruct;
- (bool)hasQuestionMark;
- (int)inputMethod;
- (id)responsesGeneratedEvent;
- (id)selectedPosition;
- (id)selectedResponse;
- (void)setHasQuestionMark:(bool)arg1;
- (void)setInputMethod:(int)arg1;
- (void)setResponsesGeneratedEvent:(id)arg1;
- (void)setSelectedPosition:(id)arg1;
- (void)setSelectedResponse:(id)arg1;
- (void)setTimeToTap:(unsigned long long)arg1;
- (unsigned long long)timeToTap;

@end
