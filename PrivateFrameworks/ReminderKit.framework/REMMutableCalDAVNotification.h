
@interface REMMutableCalDAVNotification : REMCalDAVNotification <REMExternalSyncMetadataWritableProviding>

@property (nonatomic, copy) NSString *daPushKey;
@property (nonatomic, copy) NSString *daSyncToken;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, retain) NSURL *hostURL;
@property (nonatomic, retain) NSString *uuidString;

@end
