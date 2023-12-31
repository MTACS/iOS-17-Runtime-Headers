
@interface CPSearchMatcher : NSObject {
    NSArray * _asciiComponents;
    NSArray * _components;
    NSData * _context;
    int  _options;
    NSData * _wholeSearchStringData;
}

- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;
- (bool)matches:(id)arg1;
- (bool)matches:(id)arg1 matchType:(int)arg2;
- (bool)matchesASCIIString:(const char *)arg1 matchType:(int)arg2;
- (bool)matchesUTF8String:(const char *)arg1;
- (bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2;
- (bool)matchesUTF8String:(const char *)arg1 matchType:(int)arg2 matchOptions:(int)arg3;

@end
