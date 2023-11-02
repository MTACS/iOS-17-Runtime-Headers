
@interface SCWWatchlistDefaults : NSObject {
    NSArray * _defaultSymbols;
}

@property (nonatomic, readonly, copy) NSArray *defaultSymbols;

+ (id)_defaultSymbolsByCountryCode;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_legacyDefaultSymbolsByCountryCode;
+ (id)defaultsForCurrentCountry;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)defaultsWithDefaultSymbols:(id)arg1;
+ (id)emptyDefaults;

- (void).cxx_destruct;
- (id)defaultSymbols;
- (id)defaultsByAppendingDefaults:(id)arg1;
- (id)initWithDefaultSymbols:(id)arg1;

@end
