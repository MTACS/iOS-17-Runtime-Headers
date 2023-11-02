
@protocol ICAttachmentViewControllerInitializing <NSObject>

@required

- (id)initWithTextAttachment:(ICAbstractTextAttachment *)arg1 forManualRendering:(bool)arg2 layoutManager:(NSLayoutManager *)arg3;

@optional

- (id)initWithTextAttachment:(ICAbstractTextAttachment *)arg1 forManualRendering:(bool)arg2 layoutManager:(NSLayoutManager *)arg3 initialCharacterIndex:(unsigned long long)arg4;

@end
