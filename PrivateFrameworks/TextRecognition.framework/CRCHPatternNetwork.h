
@interface CRCHPatternNetwork : NSObject {
    void * _network;
    NSDictionary * _startCursorForContentTypes;
    NSDictionary * _startEdges;
    NSDictionary * _symbols;
}

+ (id)cursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)cursorByAdvancingWithSymbol:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (bool)isFinalCursor:(id)arg1 inNetwork:(id)arg2;
+ (id)kDefaultPatterns;
+ (id)kDefaultPatternsPlusUrlsAndEmails;
+ (id)kEmailPatterns;
+ (id)kUrlPatterns;
+ (id)patternToSymbolMap;
+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2;

- (id)advanceCursor:(id)arg1 withSymbol:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end
