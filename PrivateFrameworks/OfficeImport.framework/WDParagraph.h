
@interface WDParagraph : WDBlock {
    unsigned long long  identifier;
    WDParagraphProperties * mProperties;
    NSMutableArray * mRuns;
}

@property unsigned long long identifier;

- (void).cxx_destruct;
- (id)addAnnotation:(int)arg1;
- (id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)addBookmark;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addCharacterRun;
- (id)addDateTime:(id)arg1;
- (id)addEndnote;
- (id)addFieldMarker;
- (id)addFieldMarker:(int)arg1;
- (id)addFootnote;
- (id)addHyperlinkFieldMarker;
- (id)addHyperlinkFieldMarker:(int)arg1;
- (id)addMath:(id)arg1;
- (void)addRun:(id)arg1;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (int)blockType;
- (void)clearProperties;
- (void)clearRuns;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isContinuationOf:(id)arg1;
- (bool)isEmpty;
- (bool)isTextFrame;
- (float)maxReflectionDistance;
- (id)newRunIterator;
- (id)properties;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)removeRun:(id)arg1;
- (id)runAt:(unsigned long long)arg1;
- (unsigned long long)runCount;
- (id)runIterator;
- (id)runs;
- (void)setIdentifier:(unsigned long long)arg1;

@end
