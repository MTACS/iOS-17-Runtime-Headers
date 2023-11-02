
@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (nonatomic, retain) ICAttachment *attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedAddressWithoutAttachmentTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool placeUpdated;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ICSearchIndexable> *targetSearchIndexable;

+ (id)newAttachmentLocationForAttachment:(id)arg1;

- (id)formattedAddressWithoutAttachmentTitle;
- (id)targetSearchIndexable;

@end
