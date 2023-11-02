
@interface ICAttachmentWebModel : ICAttachmentModel {
    id /* block */  _pendingFetchCompletionHandler;
}

@property (copy) id /* block */ pendingFetchCompletionHandler;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (bool)hasPreviews;
- (id /* block */)pendingFetchCompletionHandler;
- (id)searchableTextContent;
- (void)setPendingFetchCompletionHandler:(id /* block */)arg1;
- (bool)showThumbnailInNoteList;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)genericBrickThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

- (bool)downloadPreviewForAttachmentURL:(id)arg1;
- (bool)extractPreviewImagesFromSynapseData:(id)arg1;
- (bool)generateAsynchronousPreviews;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickLargeThumbnailCreator;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;
- (id)itemProvider;
- (bool)needToGeneratePreviews;
- (void)saveImagesFromLinkMetadata:(id)arg1;
- (bool)updateAttachmentPreviewImagesMetadata;
- (void)updateAttachmentWithPreviewImage:(id)arg1;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;

@end
