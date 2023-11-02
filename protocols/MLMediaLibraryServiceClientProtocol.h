
@protocol MLMediaLibraryServiceClientProtocol <NSObject>

@required

- (void)importOperationWithIdentifier:(NSUUID *)arg1 didUpdateWithProgress:(float)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;

@end
