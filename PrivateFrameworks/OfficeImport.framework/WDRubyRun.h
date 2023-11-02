
@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun * mPhoneticRun;
    WDRubyProperties * mRubyProperties;
}

- (void).cxx_destruct;
- (void)appendPhoneticRunString:(id)arg1;
- (id)description;
- (id)initWithParagraph:(id)arg1;
- (id)phoneticRun;
- (id)phoneticRunString;
- (id)rubyBase;
- (id)rubyProperties;
- (int)runType;
- (void)setPhoneticRunString:(id)arg1;

@end
