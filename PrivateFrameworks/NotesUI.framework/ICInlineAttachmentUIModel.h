
@interface ICInlineAttachmentUIModel : NSObject {
    ICInlineAttachment * _attachment;
    bool  _selected;
}

@property (nonatomic, readonly) ICInlineAttachment *attachment;
@property (nonatomic, readonly) bool fadesColorDuringHighlight;
@property (nonatomic, readonly) UIColor *labelColor;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) long long textFindingOffset;

+ (id)attributesForInlineAttachmentUIModel;
+ (id)filteredStyleAttributes:(id)arg1;

- (void).cxx_destruct;
- (id)attachment;
- (id)attributedStringWithSurroundingAttributes:(id)arg1 formatter:(id /* block */)arg2;
- (bool)fadesColorDuringHighlight;
- (id)highlightingAttributedString:(id)arg1 withRegexMatches:(id)arg2;
- (id)highlightingAttributedString:(id)arg1 withSurroundingAttributes:(id)arg2;
- (id)initWithAttachment:(id)arg1;
- (bool)isSelected;
- (id)labelColor;
- (void)setSelected:(bool)arg1;
- (long long)textFindingOffset;

@end
