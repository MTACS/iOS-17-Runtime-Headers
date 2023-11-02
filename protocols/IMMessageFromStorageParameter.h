
@protocol IMMessageFromStorageParameter <IMPipelineParameter>

@required

- (NSString *)GUID;
- (IMDAccount *)account;
- (IMDChat *)chat;
- (bool)isFromStorage;
- (bool)isLastFromStorage;
- (NSArray *)messageItems;

@end
