
@interface GEOResultRefinementSection : NSObject {
    long long  _refinementsType;
    NSArray * _resultRefinements;
    NSString * _sectionHeader;
}

@property (nonatomic) long long refinementsType;
@property (nonatomic, copy) NSArray *resultRefinements;
@property (nonatomic, copy) NSString *sectionHeader;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinementSection;
- (id)initWithResultRefinementSection:(id)arg1;
- (id)initWithSectionHeader:(id)arg1 resultRefinements:(id)arg2;
- (long long)refinementsType;
- (id)resultRefinements;
- (id)sectionHeader;
- (void)setRefinementsType:(long long)arg1;
- (void)setResultRefinements:(id)arg1;
- (void)setSectionHeader:(id)arg1;

@end
