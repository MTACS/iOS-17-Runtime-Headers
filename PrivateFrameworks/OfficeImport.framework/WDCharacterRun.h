
@interface WDCharacterRun : WDRunWithCharacterProperties {
    bool  mBinaryWriterContentFlag;
    NSMutableString * mString;
}

- (void).cxx_destruct;
- (void)appendString:(id)arg1;
- (bool)binaryWriterContentFlag;
- (void)clearString;
- (void)copyPropertiesFrom:(id)arg1;
- (id)description;
- (id)initWithParagraph:(id)arg1;
- (id)initWithParagraph:(id)arg1 string:(id)arg2;
- (bool)isEmpty;
- (void)removeLastCharacter:(unsigned short)arg1;
- (int)runType;
- (void)setBinaryWriterContentFlag:(bool)arg1;
- (void)setPropertiesForDocument;
- (void)setString:(id)arg1;
- (id)string;

@end
