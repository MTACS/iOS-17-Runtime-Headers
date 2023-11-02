
@interface ICAttachmentPDFModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)contentTextFromPDFAtURL:(id)arg1;

- (bool)canMarkup;
- (bool)hasPreviews;
- (bool)providesStandaloneTitleForNote;
- (id)searchableTextContent;
- (bool)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;

@end
