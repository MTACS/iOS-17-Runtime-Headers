
@interface MapsSuggestionsResumeRouteTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsETAChargeTitleFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)formatTitlesForEntry:(id)arg1 eta:(id)arg2 requiredChargeLevel:(id)arg3 currentChargeLevel:(id)arg4;

@end
