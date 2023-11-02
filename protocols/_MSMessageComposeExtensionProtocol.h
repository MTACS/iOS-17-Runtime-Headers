
@protocol _MSMessageComposeExtensionProtocol <NSObject>

@required

- (void)_addStickerAnimationDidFinishWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_addStickerToStoreWithRepresentations:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSError *, void*
- (void)_addStickerToStoreWithRepresentations:(void *)arg1 completionWithStickerIDs:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, NSArray *, NSError *, void*
- (void)_addStickerToStoreWithRepresentations:(void *)arg1 sourceRect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)_animatedStickerCreationProgressChanged:(NSDictionary *)arg1 progress:(double)arg2;
- (void)_becomeActiveWithConversationState:(_MSConversationState *)arg1 presentationState:(_MSPresentationState *)arg2;
- (void)_canSendMessage:(void *)arg1 conversationState:(void *)arg2 associatedText:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: MSMessage *, _MSConversationState *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, MSMessage *, NSString *, void*
- (void)_conversationDidChangeWithConversationState:(_MSConversationState *)arg1;
- (void)_didCancelSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didReceiveMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didRemoveAssetArchiveWithIdentifier:(NSString *)arg1;
- (void)_didRemoveStickerPreview;
- (void)_didStartSendingMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_didUpdateMessage:(MSMessage *)arg1 conversationState:(_MSConversationState *)arg2;
- (void)_handleTextInputPayload:(void *)arg1 withPayloadID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_hostDidBeginDeferredTeardown;
- (void)_prepareForAddStickerFromSubjectLift;
- (void)_prepareForPresentationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_presentationDidChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_presentationWillChangeToPresentationState:(_MSPresentationState *)arg1;
- (void)_requestContentSizeThatFits:(void *)arg1 presentationStyle:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSValue *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGSize { double x1; double x2; }, void*
- (void)_requestPresentationWithStickerType:(NSString *)arg1 identifier:(NSUUID *)arg2;
- (void)_requestSnapshotThatFits:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSValue *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)_requestSnapshotWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)_requestStickerExtensionMetadataDictionary:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)_resignActive;
- (void)_setHostBundleID:(NSString *)arg1;
- (void)_setPluginIdentifierToShow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_volumeButtonPressed:(bool)arg1;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;

@end
