
@interface MessageAttachmentActionGenerator : NSObject

+ (id)_saveToCameraRollActionForFutureRepresentations:(id)arg1 title:(id)arg2 image:(id)arg3;
+ (id)markupDocumentActionForURL:(id)arg1 messageObjectID:(id)arg2 mailboxObjectID:(id)arg3 subject:(id)arg4 senderDisplayName:(id)arg5 shouldShowReplyAll:(bool)arg6 originView:(id)arg7 useFullScreenPresentation:(bool)arg8 contentRepresentationHandlingDelegate:(id)arg9 assetViewerManager:(id)arg10;
+ (id)quicklookActionForAttachmentContext:(id)arg1 alternateAction:(id)arg2 originView:(id)arg3 attachmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 useFullScreenPresentation:(bool)arg5;
+ (id)quicklookActionForURL:(id)arg1 messageObjectID:(id)arg2 mailboxObjectID:(id)arg3 subject:(id)arg4 senderDisplayName:(id)arg5 shouldShowReplyAll:(bool)arg6 originView:(id)arg7 attachmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg8 useFullScreenPresentation:(bool)arg9 contentRepresentationHandlingDelegate:(id)arg10 assetViewerManager:(id)arg11;
+ (id)saveAllAttachmentsActionWithTitle:(id)arg1 futureRepresentations:(id)arg2;
+ (id)saveImageActionForFutureRepresentation:(id)arg1;
+ (id)saveVideoActionForFutureRepresentation:(id)arg1;

@end
