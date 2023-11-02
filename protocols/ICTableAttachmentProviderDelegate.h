
@protocol ICTableAttachmentProviderDelegate <NSObject, ICTableDelegate, ICTTTextUndoTarget>

@required

- (void)tableAttachmentSaveOnMainThread;

@end
