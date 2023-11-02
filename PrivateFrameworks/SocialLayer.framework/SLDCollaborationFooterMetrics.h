
@interface SLDCollaborationFooterMetrics : NSObject {
    UISSlotStyle * _style;
    SLDCollaborationFooterSlotTag * _tag;
}

@property (nonatomic, readonly) double expectedHeight;
@property (nonatomic, readonly) UISSlotStyle *style;
@property (nonatomic, readonly, copy) NSAttributedString *subtitleAttributedString;
@property (nonatomic, readonly) SLDCollaborationFooterSlotTag *tag;
@property (nonatomic, readonly, copy) NSAttributedString *titleAttributedString;

- (void).cxx_destruct;
- (id)attributedStringWithString:(id)arg1 textStyle:(struct __CFString { }*)arg2 color:(struct CGColor { }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForString:(id)arg1;
- (double)expectedHeight;
- (id)initWithSlotStyle:(id)arg1 tag:(id)arg2;
- (struct CGColor { }*)labelColor;
- (struct CGColor { }*)secondaryLabelColor;
- (id)style;
- (id)subtitleAttributedString;
- (id)tag;
- (id)titleAttributedString;

@end
