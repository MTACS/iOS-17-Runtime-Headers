
@protocol DOCUndoableOperation <NSObject>

@required

- (NSString *)actionNameForUndoing;
- (NSObject<DOCUndoableOperation> *)operationForRedoing;
- (NSObject<DOCUndoableOperation> *)operationForUndoing;
- (void)registerUndo;

@end
