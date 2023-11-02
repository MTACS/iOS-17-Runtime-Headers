
@interface WDRunWithCharacterProperties : WDRun {
    WDCharacterProperties * mProperties;
}

@property (getter=isHidden, readonly) bool hidden;
@property (retain) WDCharacterProperties *properties;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;
- (bool)isHidden;
- (id)properties;
- (void)setProperties:(id)arg1;

@end
