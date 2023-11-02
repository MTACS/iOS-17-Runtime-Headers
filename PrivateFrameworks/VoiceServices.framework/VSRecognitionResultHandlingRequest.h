
@interface VSRecognitionResultHandlingRequest : NSObject {
    VSRecognitionAction * _action;
    <VSRecognitionResultHandler> * _handler;
    NSArray * _results;
}

- (void)dealloc;
- (id)handler;
- (id)initWithHandler:(id)arg1 results:(id)arg2;
- (id)nextAction;
- (id)results;
- (void)setNextAction:(id)arg1;

@end
