
@interface PKTextInputResultCommand : NSObject {
    bool  __applyIntermediateChange;
    PKTextInputTargetState * __inProgressInputTargetState;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _affectedRange;
    long long  _commandState;
    NSString * _commitReason;
    NSString * _committedText;
    long long  _committedTokenColumnCount;
    <PKTextInputResultCommandDelegate> * _delegate;
    bool  _destinationFrameForAnimationMightMove;
    PKTextInputTargetState * _finalInputTargetState;
    PKTextInputHandwritingShot * _handwritingShot;
    bool  _hasPendingUncommittedChanges;
    long long  _immediateCommitType;
    PKTextInputTargetState * _initialInputTargetState;
    CHTextInputQueryItem * _queryItem;
    bool  _resultedInTargetChange;
    PKTextInputElementContent * _targetElementContent;
}

- (void).cxx_destruct;
- (id)description;

@end
