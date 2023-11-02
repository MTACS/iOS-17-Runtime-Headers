
@interface TLKRichText : TLKMultilineText {
    NSArray * _formattedTextItems;
}

@property (nonatomic, retain) NSArray *formattedTextItems;
@property (readonly) bool hasContent;
@property (readonly) bool hasOnlyImage;

- (void).cxx_destruct;
- (id)description;
- (id)filterItemsByType:(unsigned long long)arg1;
- (id)formattedTextItems;
- (bool)hasContent;
- (bool)hasOnlyImage;
- (id)icons;
- (id)inlineRoundedText;
- (unsigned long long)maxLines;
- (void)setFormattedTextItems:(id)arg1;
- (id)stars;
- (id)text;

@end
