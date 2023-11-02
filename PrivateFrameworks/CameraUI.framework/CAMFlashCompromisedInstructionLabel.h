
@interface CAMFlashCompromisedInstructionLabel : CAMInstructionLabel {
    unsigned long long  _compromise;
}

@property (nonatomic) unsigned long long compromise;

+ (id)_textForCompromise:(unsigned long long)arg1;
+ (bool)shouldDisplayInstructionForCompromise:(unsigned long long)arg1;

- (id)_symbolPrefixName;
- (id)_textColor;
- (void)_updateTextWithPriorCompromise:(unsigned long long)arg1;
- (unsigned long long)compromise;
- (void)setCompromise:(unsigned long long)arg1;

@end
