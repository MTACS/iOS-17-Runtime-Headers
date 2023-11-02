
@interface SFSecurityRecommendationsCellData : NSObject {
    unsigned long long  _numberOfWarnings;
    NSString * _subtitleText;
    long long  _warningStyle;
}

@property (nonatomic) unsigned long long numberOfWarnings;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic) long long warningStyle;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLoadingSubtitle;
- (id)initWithSubtitleText:(id)arg1 numberOfWarnings:(unsigned long long)arg2 warningStyle:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfWarnings;
- (void)setNumberOfWarnings:(unsigned long long)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setWarningStyle:(long long)arg1;
- (id)subtitleText;
- (long long)warningStyle;

@end
