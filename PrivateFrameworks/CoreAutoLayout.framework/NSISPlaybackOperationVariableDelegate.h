
@interface NSISPlaybackOperationVariableDelegate : NSObject {
    NSString * _markedConstraintDescription;
    int  _orientationHint;
    NSISVariable * _variable;
    NSString * _variableDescription;
    bool  _variableIsUserObservable;
}

@property (copy) NSString *markedConstraintDescription;
@property int orientationHint;
@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property bool variableIsUserObservable;

- (void)_addToEngine:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)firstItem;
- (id)markedConstraintDescription;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)orientationHint;
- (id)secondItem;
- (void)setMarkedConstraintDescription:(id)arg1;
- (void)setOrientationHint:(int)arg1;
- (void)setVariable:(id)arg1;
- (void)setVariableDescription:(id)arg1;
- (void)setVariableIsUserObservable:(bool)arg1;
- (id)variable;
- (id)variableDescription;
- (bool)variableIsUserObservable;

@end
