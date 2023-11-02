
@interface TUConversationActivityMetadata : NSObject <NSSecureCoding, TUSanitizedCopying> {
    TUConversationActivityContext * _context;
    NSURL * _fallbackURL;
    NSData * _imageData;
    TUSandboxExtendedURL * _imageFileURL;
    NSURL * _invitationURL;
    NSData * _linkMetadatablob;
    long long  _preferredBroadcastingAttributes;
    TUConversationActivitySceneAssociationBehavior * _sceneAssociationBehavior;
    NSString * _subTitle;
    bool  _supportsActivityPreviews;
    bool  _supportsContinuationOnTV;
    NSString * _title;
}

@property (nonatomic, readonly, copy) TUConversationActivityContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fallbackURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, retain) TUSandboxExtendedURL *imageFileURL;
@property (nonatomic, readonly, copy) NSURL *invitationURL;
@property (readonly) unsigned long long length;
@property (nonatomic, copy) NSData *linkMetadatablob;
@property (nonatomic) long long preferredBroadcastingAttributes;
@property (nonatomic, readonly, copy) TUConversationActivitySceneAssociationBehavior *sceneAssociationBehavior;
@property (nonatomic, readonly, copy) NSString *subTitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsActivityPreviews;
@property (nonatomic) bool supportsContinuationOnTV;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)activityMetadataWithDataBlob:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_createImageFolderIfNeeded;
- (id)_filePathForImage;
- (id)_imagePreviewDirectoryPath;
- (bool)_isEqualToActivityMetadata:(id)arg1;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackURL;
- (unsigned long long)hash;
- (id)imageData;
- (id)imageFileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 linkMetadata:(id)arg2 fallbackURL:(id)arg3 invitationURL:(id)arg4 supportsContinuationOnTV:(bool)arg5 title:(id)arg6 subTitle:(id)arg7 imageData:(id)arg8;
- (id)initWithContext:(id)arg1 linkMetadata:(id)arg2 fallbackURL:(id)arg3 invitationURL:(id)arg4 supportsContinuationOnTV:(bool)arg5 title:(id)arg6 subTitle:(id)arg7 imageData:(id)arg8 preferredBroadcastingAttributes:(long long)arg9 sceneAssociationBehavior:(id)arg10 supportsActivityPreviews:(bool)arg11;
- (id)invitationURL;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToActivityMetadata:(id)arg1;
- (unsigned long long)length;
- (id)linkMetadatablob;
- (long long)preferredBroadcastingAttributes;
- (void)removeImageDiskFile;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)saveImageToDisk;
- (id)sceneAssociationBehavior;
- (id)serializedData;
- (void)setImageData:(id)arg1;
- (void)setImageFileURL:(id)arg1;
- (void)setLinkMetadatablob:(id)arg1;
- (void)setPreferredBroadcastingAttributes:(long long)arg1;
- (void)setSupportsContinuationOnTV:(bool)arg1;
- (id)subTitle;
- (bool)supportsActivityPreviews;
- (bool)supportsContinuationOnTV;
- (id)title;

@end
