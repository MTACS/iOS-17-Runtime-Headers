
@interface MPUTextContainerContentSizeUpdater : NSObject {
    NSString * _lastSeenPreferredContentSizeCategory;
    <MPUTextContainer> * _textContainer;
}

@property (nonatomic, retain) NSString *lastSeenPreferredContentSizeCategory;
@property (nonatomic) <MPUTextContainer> *textContainer;

- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryDidChange:(id)arg1;
- (void)_updateTextStyleFonts;
- (void)dealloc;
- (void)ensureTextStyleFontsMatchPreferredTextStyleFonts;
- (id)init;
- (id)lastSeenPreferredContentSizeCategory;
- (void)setLastSeenPreferredContentSizeCategory:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (id)textContainer;

@end
