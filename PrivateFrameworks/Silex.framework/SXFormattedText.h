
@interface SXFormattedText : SXJSONObject {
    bool  shouldWrapText;
}

@property (nonatomic, readonly) SXJSONArray *additions;
@property (nonatomic, readonly) SXJSONArray *inlineTextStyles;
@property (nonatomic) bool shouldWrapText;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textStyle;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (id)description;
- (id)initWithText:(id)arg1;
- (void)setShouldWrapText:(bool)arg1;
- (bool)shouldWrapText;
- (id)textWithValue:(id)arg1 withType:(int)arg2;

@end
