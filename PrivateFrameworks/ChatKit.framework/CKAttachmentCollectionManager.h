
@interface CKAttachmentCollectionManager : NSObject {
    IMChat * _chat;
    <CKAttachmentCollectionManagerDelegate> * _delegate;
    NSArray * _otherContentsItems;
    NSSet * _photoTransferGUIDs;
    NSArray * _photosVideosItems;
    NSArray * _webLinksItems;
}

@property (nonatomic, retain) IMChat *chat;
@property (nonatomic) <CKAttachmentCollectionManagerDelegate> *delegate;
@property (nonatomic, retain) NSArray *otherContentsItems;
@property (nonatomic, retain) NSSet *photoTransferGUIDs;
@property (nonatomic, retain) NSArray *photosVideosItems;
@property (nonatomic, retain) NSArray *webLinksItems;

- (void).cxx_destruct;
- (id)chat;
- (void)chatItemsChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAttachmentItems:(id)arg1;
- (id)guidFromChatItem:(id)arg1;
- (id)initWithChat:(id)arg1;
- (id)initWithChat:(id)arg1 photoTransferGUIDs:(id)arg2;
- (id)otherContentsItems;
- (id)photoTransferGUIDs;
- (id)photosVideosItems;
- (void)setChat:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOtherContentsItems:(id)arg1;
- (void)setPhotoTransferGUIDs:(id)arg1;
- (void)setPhotosVideosItems:(id)arg1;
- (void)setWebLinksItems:(id)arg1;
- (void)updateCollections;
- (id)webLinksItems;

@end
