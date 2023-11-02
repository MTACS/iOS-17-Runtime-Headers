
@interface PPConnectionsDuetSource : PPConnectionsSource <PPConnectionsLocationSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)duetUserActivitiesFromStreams:(id)arg1 limit:(unsigned long long)arg2 afterDate:(id)arg3 explanationSet:(id)arg4;
+ (id)sharedInstance;

- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 afterDate:(id)arg2 explanationSet:(id)arg3;
- (id)duetLocationUserActivitiesWithLimit:(unsigned long long)arg1 explanationSet:(id)arg2;
- (id)identifier;
- (bool)isDuetEventAuthorized:(id)arg1 bundleID:(id)arg2;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 duetLimit:(long long)arg5 consumer:(unsigned long long)arg6 richLocationItems:(bool)arg7 resolveEKLocations:(bool)arg8 explanationSet:(id)arg9;
- (id)supportedLocationFields;
- (bool)testMetadataForValidAddressAndNameWithEvent:(id)arg1;
- (id)whitespaceAndNewlineCharacterSet;

@end
