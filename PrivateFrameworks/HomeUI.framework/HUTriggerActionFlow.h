
@interface HUTriggerActionFlow : NSObject {
    unsigned long long  _flowState;
    bool  _hasChangedState;
}

@property (nonatomic, readonly) unsigned long long flowState;
@property (nonatomic, readonly) bool hasChangedState;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) bool isLastState;
@property (nonatomic, readonly) bool isSingleFlow;
@property (nonatomic, readonly) bool isStandalone;

+ (id)selectFlowForState:(unsigned long long)arg1;

- (unsigned long long)_nextState;
- (unsigned long long)flowState;
- (id)getNextState;
- (bool)hasChangedState;
- (id)initWithEditorMode:(unsigned long long)arg1;
- (id)initWithFlowState:(unsigned long long)arg1;
- (id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(bool)arg2;
- (bool)isFinished;
- (bool)isLastState;
- (bool)isSingleFlow;
- (bool)isStandalone;

@end
