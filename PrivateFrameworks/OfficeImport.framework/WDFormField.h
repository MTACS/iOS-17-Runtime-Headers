
@interface WDFormField : WDRun {
    NSString * mDosName;
    bool  mLinkAbsolute;
    bool  mLinkSpecifyingNamedLocation;
    NSString * mMacName;
    NSString * mNamedLocation;
    unsigned int  mPosition;
    NSString * mURI;
}

- (void).cxx_destruct;
- (id)URI;
- (id)description;
- (id)dosName;
- (id)initWithParagraph:(id)arg1;
- (bool)linkAbsolute;
- (bool)linkSpecifyingNamedLocation;
- (id)macName;
- (id)namedLocation;
- (unsigned int)position;
- (int)runType;
- (void)setDosName:(id)arg1;
- (void)setLinkAbsolute:(bool)arg1;
- (void)setLinkSpecifyingNamedLocation:(bool)arg1;
- (void)setMacName:(id)arg1;
- (void)setNamedLocation:(id)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setURI:(id)arg1;

@end
