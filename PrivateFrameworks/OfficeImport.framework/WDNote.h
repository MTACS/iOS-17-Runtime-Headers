
@interface WDNote : WDRun {
    bool  mAutomaticNumbering;
    WDCharacterRun * mReference;
    WDText * mText;
}

- (void).cxx_destruct;
- (bool)automaticNumbering;
- (id)description;
- (id)initWithParagraph:(id)arg1 footnote:(bool)arg2;
- (id)reference;
- (int)runType;
- (void)setAutomaticNumbering:(bool)arg1;
- (id)text;

@end
