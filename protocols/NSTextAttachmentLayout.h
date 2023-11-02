
@protocol NSTextAttachmentLayout <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForAttributes:(NSDictionary *)arg1 location:(id <NSTextLocation>)arg2 textContainer:(NSTextContainer *)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 position:(struct CGPoint { double x1; double x2; })arg5;
- (UIImage *)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 attributes:(NSDictionary *)arg2 location:(id <NSTextLocation>)arg3 textContainer:(NSTextContainer *)arg4;
- (NSTextAttachmentViewProvider *)viewProviderForParentView:(UIView *)arg1 location:(id <NSTextLocation>)arg2 textContainer:(NSTextContainer *)arg3;

@end
