
@interface ICAttachmentMovieModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (void)addLocation;
- (bool)hasPreviews;
- (bool)hasThumbnailImage;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)placeholderHeight;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (bool)shouldUsePlaceholderBoundsIfNecessary;
- (bool)showThumbnailInNoteList;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)generatePreviewsInOperation:(id)arg1;
- (id /* block */)genericBrickThumbnailCreator;
- (id /* block */)genericListThumbnailCreator;

@end
