
@protocol CKDOperationInfoDelegate <NSObject>

@required

- (bool)isInvalidated;
- (void)operationWithID:(NSString *)arg1 receivedCallback:(CKDLongLivedOperationPersistedCallback *)arg2;
- (void)wasUnexpectedlyUnregisteredForOperationID:(NSString *)arg1;

@end
