
@interface WFActionParameterSummary : NSObject {
    WFAction * _action;
    <WFPropertyListObject> * _definition;
    NSArray * _possibleValues;
    NSString * _singleFormatString;
    NSString * _title;
}

@property (nonatomic) WFAction *action;
@property (nonatomic, readonly, copy) <WFPropertyListObject> *definition;
@property (nonatomic, readonly, copy) NSArray *possibleValues;
@property (nonatomic, readonly, copy) NSString *singleFormatString;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)action;
- (id)definition;
- (id)explodedPossibleValuesForLocalization;
- (id)explodedPossibleValuesForLocalizationWithParameterReplacements;
- (id)explodedSummaryStringWithKey:(id)arg1 value:(id)arg2;
- (id)initWithAction:(id)arg1 definition:(id)arg2;
- (id)initWithAction:(id)arg1 definition:(id)arg2 title:(id)arg3;
- (id)localizedFormatString;
- (id)localizedTitle;
- (id)parameterReplacedString:(id)arg1 withOverrides:(id)arg2;
- (id)placeholderForKey:(id)arg1;
- (id)possibleValues;
- (id)possibleValuesFromDictionary:(id)arg1;
- (void)setAction:(id)arg1;
- (id)singleFormatString;
- (id)title;

@end
