
@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter> {
    NSNumber * _minimumPercentage;
    NSNumberFormatter * _numberFormatter;
    NSNumberFormatter * _percentageFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *minimumPercentage;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic, readonly) NSString *percentSymbol;
@property (nonatomic, retain) NSNumberFormatter *percentageFormatter;
@property (readonly) Class superclass;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)formattedChanceOfPrecipitation:(id)arg1 shouldIncludePercentSymbol:(bool)arg2;
- (id)formattedChanceOfPrecipitation:(id)arg1 style:(unsigned long long)arg2 shouldIncludePercentSymbol:(bool)arg3;
- (id)formattedChanceOfPrecipitationChance:(id)arg1 style:(unsigned long long)arg2 shouldIncludePercentSymbol:(bool)arg3;
- (id)init;
- (id)minimumPercentage;
- (id)numberFormatter;
- (id)percentSymbol;
- (id)percentageFormatter;
- (double)roundedChanceOfPrecipitation:(id)arg1;
- (void)setMinimumPercentage:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setPercentageFormatter:(id)arg1;
- (double)value:(id)arg1;

@end
