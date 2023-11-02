
@interface ICAttachmentGenericModel : ICAttachmentModel

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;

- (bool)hasPreviews;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)generateAsynchronousPreviews;
- (bool)generatePreviewsInOperation:(id)arg1;
- (bool)needToGeneratePreviews;

@end
