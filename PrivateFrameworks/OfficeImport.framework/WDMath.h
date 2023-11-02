
@interface WDMath : WDRun {
    int  _justification;
    WDCharacterProperties * _properties;
    NSString * _xmlBlob;
}

@property (nonatomic) int justification;
@property (nonatomic, retain) WDCharacterProperties *properties;
@property (nonatomic, readonly) NSString *xmlBlob;

- (void).cxx_destruct;
- (void)clearProperties;
- (id)description;
- (id)initWithParagraph:(id)arg1 xmlBlob:(id)arg2;
- (int)justification;
- (id)properties;
- (int)runType;
- (void)setJustification:(int)arg1;
- (void)setProperties:(id)arg1;
- (id)xmlBlob;

@end
