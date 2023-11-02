
@interface EDMessageAttachmentMetadata : NSObject <EFPubliclyDescribable> {
    NSNumber * _attachmentID;
    long long  _globalMessageID;
    NSString * _mimePartNumber;
    NSString * _name;
    NSURL * _remoteURL;
}

@property (nonatomic, retain) NSNumber *attachmentID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) long long globalMessageID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mimePartNumber;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSURL *remoteURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)description;
- (id)ef_publicDescription;
- (long long)globalMessageID;
- (id)initWithGlobalMessageID:(long long)arg1 attachmentID:(id)arg2;
- (id)initWithGlobalMessageID:(long long)arg1 name:(id)arg2 mimePart:(id)arg3 attachmentID:(id)arg4 remoteURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mimePartNumber;
- (id)name;
- (id)remoteURL;
- (void)setAttachmentID:(id)arg1;
- (void)setMimePartNumber:(id)arg1;

@end
