
@interface MTRActionsClusterActionFailedEvent : NSObject <NSCopying> {
    NSNumber * _actionID;
    NSNumber * _error;
    NSNumber * _invokeID;
    NSNumber * _newState;
}

@property (nonatomic, copy) NSNumber *actionID;
@property (nonatomic, copy) NSNumber *error;
@property (nonatomic, copy) NSNumber *invokeID;
@property (getter=getNewState, nonatomic, copy) NSNumber *newState;

- (void).cxx_destruct;
- (id)actionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)error;
- (id)getNewState;
- (id)init;
- (id)invokeID;
- (void)setActionID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setInvokeID:(id)arg1;
- (void)setNewState:(id)arg1;

@end
