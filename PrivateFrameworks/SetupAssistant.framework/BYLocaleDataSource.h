
@interface BYLocaleDataSource : NSObject {
    bool  _hasRecommendedLocaleFromLanguage;
    NSString * _language;
    NSMutableArray * _moreCountries;
    NSMutableArray * _suggestedCountries;
}

@property (nonatomic) bool hasRecommendedLocaleFromLanguage;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSMutableArray *moreCountries;
@property (nonatomic, retain) NSMutableArray *suggestedCountries;

+ (id)newWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (bool)hasRecommendedLocaleFromLanguage;
- (id)language;
- (id)moreCountries;
- (unsigned long long)numberOfOtherLocales;
- (unsigned long long)numberOfRecommendedLocales;
- (id)otherLocaleAtIndex:(unsigned long long)arg1;
- (id)recommendedLocaleAtIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)setHasRecommendedLocaleFromLanguage:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMoreCountries:(id)arg1;
- (void)setSuggestedCountries:(id)arg1;
- (id)suggestedCountries;

@end
