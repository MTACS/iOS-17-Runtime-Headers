
@interface BlastDoorCombinedPluginAttachmentInfo : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  combinedPluginAttachmentInfo;
}

@property (nonatomic, readonly) NSURL *attachmentURL;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *encryptionKey;
@property (nonatomic, readonly) unsigned long long expectedFileSize;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) NSData *signature;

- (void).cxx_destruct;
- (id)attachmentURL;
- (id)description;
- (id)encryptionKey;
- (unsigned long long)expectedFileSize;
- (id)init;
- (id)ownerID;
- (id)signature;

@end
