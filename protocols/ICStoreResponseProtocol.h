
@protocol ICStoreResponseProtocol <NSObject>

@required

- (ICStoreDialogResponse *)dialog;
- (NSError *)serverError;

@end
