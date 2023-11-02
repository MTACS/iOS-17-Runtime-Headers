
@interface CKDOperationInfoHolderOperation : CKDOperation {
    int  _operationType;
}

@property (nonatomic) int operationType;

- (id)initWithOperationInfo:(id)arg1 container:(id)arg2 operationType:(int)arg3;
- (void)main;
- (int)operationType;
- (void)setOperationType:(int)arg1;
- (bool)shouldKeepXPCConnectionAlive;

@end
