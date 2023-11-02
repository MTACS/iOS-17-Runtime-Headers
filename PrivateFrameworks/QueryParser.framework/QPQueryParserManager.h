
@interface QPQueryParserManager : NSObject {
    NSLocale * _currentLocale;
    QPDataDetectorsParser * _dateParser;
    bool  _modelIsLoaded;
    NSURL * _originalCustomResourceDirectory;
    NSDate * _originalDate;
    NSLocale * _originalLocale;
    NSArray * _originalPreferredLocales;
    void * _parser;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)availableLanguages;
+ (id)defaultManager;
+ (id)notesManager;
+ (id)photosParserManager;
+ (id)remindersParserManager;
+ (id)spotlightManager;

- (void).cxx_destruct;
- (bool)available;
- (void)cooldown;
- (id)dateFromParseAttributes:(id)arg1;
- (void)dealloc;
- (void)enumerateDateParseResultsForString:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateParseResultsForStartDateString:(id)arg1 startDateContext:(id)arg2 endDateString:(id)arg3 endDateContext:(id)arg4 options:(id)arg5 withBlock:(id /* block */)arg6;
- (void)enumerateParseResultsForString:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateSpotlightResultsForString:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithOptions:(id)arg1;
- (id)locale;
- (void)preheat;
- (void)reset;
- (void)setOptions:(id)arg1;
- (void)updateWithOptions:(id)arg1;

@end
