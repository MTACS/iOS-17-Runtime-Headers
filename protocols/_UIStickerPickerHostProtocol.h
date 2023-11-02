
@protocol _UIStickerPickerHostProtocol <NSObject>

@required

- (void)dismissCard;
- (void)presentCard;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)stageSticker:(_UISticker *)arg1;
- (void)stageStickerWithIdentifier:(NSString *)arg1 representations:(NSArray *)arg2 name:(NSString *)arg3 externalURI:(NSString *)arg4 accessibilityLabel:(NSString *)arg5;
- (void)stickerPickerCardDidLoad;

@end
