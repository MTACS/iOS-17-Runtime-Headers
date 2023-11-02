
@interface _LTTextLanguageDetectorScorer : NSObject {
    NSMutableArray * _items;
    NSArray * _supportedLocales;
}

@property (nonatomic, readonly) bool hasWeightedLocale;
@property (nonatomic, readonly, copy) NSLocale *weightedLocale;

- (void).cxx_destruct;
- (void)append:(id)arg1 recognizer:(id)arg2;
- (bool)hasWeightedLocale;
- (id)initWithSupportedLocales:(id)arg1;
- (id)weightedLocale;

@end
