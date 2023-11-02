
@interface WBSSiriIntelligenceDonorHistoryData : NSObject {
    NSArray * _autocompleteTriggers;
    NSString * _fullPageText;
    NSDate * _lastVisitedDate;
    NSString * _pageTitle;
    NSURL * _pageURL;
    WBSSiriIntelligenceDonorPersonalizationData * _personalizationData;
    NSString * _profileIdentifier;
    NSString * _readerText;
    NSString * _userVisibleURLString;
    unsigned long long  _visitCount;
}

@property (nonatomic, copy) NSArray *autocompleteTriggers;
@property (nonatomic, copy) NSString *fullPageText;
@property (nonatomic, copy) NSDate *lastVisitedDate;
@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, copy) NSURL *pageURL;
@property (nonatomic, retain) WBSSiriIntelligenceDonorPersonalizationData *personalizationData;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSString *readerText;
@property (nonatomic, copy) NSString *userVisibleURLString;
@property (nonatomic) unsigned long long visitCount;

- (void).cxx_destruct;
- (id)autocompleteTriggers;
- (id)fullPageText;
- (id)lastVisitedDate;
- (id)pageTitle;
- (id)pageURL;
- (id)personalizationData;
- (id)profileIdentifier;
- (id)readerText;
- (void)setAutocompleteTriggers:(id)arg1;
- (void)setFullPageText:(id)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPersonalizationData:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setReaderText:(id)arg1;
- (void)setUserVisibleURLString:(id)arg1;
- (void)setVisitCount:(unsigned long long)arg1;
- (id)userVisibleURLString;
- (unsigned long long)visitCount;

@end
