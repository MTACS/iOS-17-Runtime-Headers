
@interface ICASEditorCallOutData : NSObject <AADataEventType> {
    ICASCollabActivityContextPath * _collabActivityContextPath;
    ICASEndState * _endState;
    ICASStartState * _startState;
}

@property (nonatomic, readonly) ICASCollabActivityContextPath *collabActivityContextPath;
@property (nonatomic, readonly) ICASEndState *endState;
@property (nonatomic, readonly) ICASStartState *startState;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collabActivityContextPath;
- (id)endState;
- (id)initWithCollabActivityContextPath:(id)arg1 startState:(id)arg2 endState:(id)arg3;
- (id)startState;
- (id)toDict;

@end
