
@interface PGTimeTitleOptions : NSObject {
    unsigned long long  _allowedFormats;
    PGGraphYearNodeCollection * _featuredYearNodes;
    bool  _filterDates;
    bool  _filterForSignificantDateNodes;
    NSLocale * _locale;
    NSSet * _locationNodes;
    NSSet * _momentNodes;
    bool  _usePeopleSubtitleFormatWithYears;
}

@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic, retain) PGGraphYearNodeCollection *featuredYearNodes;
@property (nonatomic) bool filterDates;
@property (nonatomic) bool filterForSignificantDateNodes;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSSet *locationNodes;
@property (nonatomic, retain) NSSet *momentNodes;
@property (nonatomic) bool usePeopleSubtitleFormatWithYears;

- (void).cxx_destruct;
- (unsigned long long)allowedFormats;
- (id)featuredYearNodes;
- (bool)filterDates;
- (bool)filterForSignificantDateNodes;
- (id)init;
- (id)locale;
- (id)locationNodes;
- (id)momentNodes;
- (void)setAllowedFormats:(unsigned long long)arg1;
- (void)setFeaturedYearNodes:(id)arg1;
- (void)setFilterDates:(bool)arg1;
- (void)setFilterForSignificantDateNodes:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocationNodes:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setUsePeopleSubtitleFormatWithYears:(bool)arg1;
- (bool)usePeopleSubtitleFormatWithYears;

@end
