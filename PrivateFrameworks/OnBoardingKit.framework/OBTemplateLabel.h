
@interface OBTemplateLabel : UILabel {
    NSString * _displayText;
    NSString * _symbolName;
}

@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *symbolName;

- (void).cxx_destruct;
- (id)displayText;
- (id)init;
- (void)setDisplayText:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitleTrailingSymbol:(id)arg1;
- (id)symbolName;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextAlignment;

@end
