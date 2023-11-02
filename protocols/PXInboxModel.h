
@protocol PXInboxModel <NSObject, NSCopying>

@required

- (unsigned long long)assetsCount;
- (NSDate *)creationDate;
- (NSString *)inboxModelTitle;
- (long long)inboxModelType;
- (bool)isSeen;
- (NSArray *)leftPreviewItems;
- (NSArray *)senderNames;
- (void)setSeen:(bool)arg1;
- (bool)userIsSender;

@optional

- (NSArray *)assetsForOneUp;
- (void)fetchLeftPreviewItemsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSString *)keyCommentGUID;
- (NSString *)ownerEmail;
- (NSString *)ownerFirstName;
- (NSString *)ownerLastName;

@end
