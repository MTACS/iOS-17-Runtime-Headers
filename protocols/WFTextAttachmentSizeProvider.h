
@protocol WFTextAttachmentSizeProvider <NSObject>

@optional

- (void)getPreferredLeadingSpacing:(double*)arg1 trailingSpacing:(double*)arg2 forDrawingTextAttachment:(NSTextAttachment *)arg3 atCharacterIndex:(unsigned long long)arg4;
- (double)preferredHeightForDrawingTextAttachment:(NSTextAttachment *)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
- (bool)shouldDrawTextAttachment:(NSTextAttachment *)arg1 atCharacterIndex:(unsigned long long)arg2;

@end
