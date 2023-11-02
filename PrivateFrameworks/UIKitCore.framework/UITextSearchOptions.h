
@interface UITextSearchOptions : NSObject {
    unsigned long long  _stringCompareOptions;
    long long  _wordMatchMethod;
}

@property (nonatomic) unsigned long long stringCompareOptions;
@property (nonatomic) long long wordMatchMethod;

+ (id)defaultSearchOptions;

- (bool)isEqual:(id)arg1;
- (void)setStringCompareOptions:(unsigned long long)arg1;
- (void)setWordMatchMethod:(long long)arg1;
- (unsigned long long)stringCompareOptions;
- (long long)wordMatchMethod;

@end
