
@interface NTAggregationBudgetInfo : NSObject <NSCopying> {
    bool  _allowSectionTitles;
    unsigned long long  _embedsLimit;
    bool  _respectMinMaxLimit;
    NTPBSectionSlotCostInfo * _sectionSlotCostInfo;
    double  _slotsLimit;
}

@property (nonatomic) bool allowSectionTitles;
@property (nonatomic) unsigned long long embedsLimit;
@property (nonatomic) bool respectMinMaxLimit;
@property (nonatomic, copy) NTPBSectionSlotCostInfo *sectionSlotCostInfo;
@property (nonatomic) double slotsLimit;

- (void).cxx_destruct;
- (bool)allowSectionTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)embedsLimit;
- (id)init;
- (bool)respectMinMaxLimit;
- (id)sectionSlotCostInfo;
- (void)setAllowSectionTitles:(bool)arg1;
- (void)setEmbedsLimit:(unsigned long long)arg1;
- (void)setRespectMinMaxLimit:(bool)arg1;
- (void)setSectionSlotCostInfo:(id)arg1;
- (void)setSlotsLimit:(double)arg1;
- (double)slotsLimit;

@end
