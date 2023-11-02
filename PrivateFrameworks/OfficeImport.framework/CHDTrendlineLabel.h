
@interface CHDTrendlineLabel : NSObject {
    bool  mAutomaticLabelDeleted;
    bool  mContentFormatDerived;
    unsigned long long  mContentFormatId;
    bool  mGeneratedText;
    OADGraphicProperties * mGraphicProperties;
    EDString * mLastCachedName;
    CHDFormula * mName;
    EDResources * mResources;
}

@property (nonatomic, retain) EDString *lastCachedName;

+ (id)trendlineLabelWithResources:(id)arg1;

- (void).cxx_destruct;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (id)description;
- (id)graphicProperties;
- (id)initWithResources:(id)arg1;
- (bool)isAutomaticLabelDeleted;
- (bool)isContentFormatDerivedFromDataPoints;
- (bool)isGeneratedText;
- (id)lastCachedName;
- (id)name;
- (void)setAutomaticLabelDeleted:(bool)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setGeneratedText:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(bool)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1 chart:(id)arg2;

@end
