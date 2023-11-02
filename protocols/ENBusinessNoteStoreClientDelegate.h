
@protocol ENBusinessNoteStoreClientDelegate <NSObject>

@required

- (NSString *)authenticationTokenForBusinessStoreClient:(ENBusinessNoteStoreClient *)arg1;
- (NSString *)noteStoreUrlForBusinessStoreClient:(ENBusinessNoteStoreClient *)arg1;

@end
