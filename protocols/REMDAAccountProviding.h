
@protocol REMDAAccountProviding <NSObject>

@required

- (NSString *)accountDescription;
- (NSString *)accountID;
- (NSString *)loggingDescription;
- (REMObjectID *)rem_accountObjectID;

@end
