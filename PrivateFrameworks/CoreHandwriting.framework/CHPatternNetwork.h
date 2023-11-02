
@interface CHPatternNetwork : NSObject {
    void * _network;
    NSDictionary * _startCursorForContentTypes;
    NSDictionary * _startNodes;
    NSDictionary * _symbols;
}

+ (bool)isString:(id)arg1 fullPattern:(long long)arg2 inNetwork:(id)arg3;
+ (id)newCursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)newCursorByAdvancingWithSymbol:(unsigned long long)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3;
+ (id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(bool)arg3;
+ (id)rootCursorForPatternType:(long long)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(bool)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end
