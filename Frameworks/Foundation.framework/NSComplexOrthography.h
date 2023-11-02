
@interface NSComplexOrthography : NSOrthography {
    NSString * _dominantScript;
    NSDictionary * _languageMap;
    unsigned int  _orthographyFlags;
}

+ (void)initialize;

- (void)dealloc;
- (id)dominantScript;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)languageMap;
- (unsigned int)orthographyFlags;

@end
