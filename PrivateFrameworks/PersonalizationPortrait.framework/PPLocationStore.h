
@interface PPLocationStore : NSObject <PPClientStore, PPFeedbackAccepting> {
    PPClientFeedbackHelper * _clientFeedbackHelper;
}

@property (nonatomic, retain) NSString *clientIdentifier;

+ (id)_mergedThoroughfareForThorughfare:(id)arg1 subThoroughfare:(id)arg2 subPremises:(id)arg3;
+ (id)defaultStore;
+ (id)describeLocationConsumer:(unsigned long long)arg1;
+ (id)new;
+ (id)placemarkWithLatitudeDegrees:(id)arg1 longitudeDegrees:(id)arg2 name:(id)arg3 thoroughfare:(id)arg4 subthoroughFare:(id)arg5 locality:(id)arg6 subLocality:(id)arg7 administrativeArea:(id)arg8 subAdministrativeArea:(id)arg9 postalCode:(id)arg10 countryCode:(id)arg11 country:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15;
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 thoroughfare:(id)arg3 subthoroughFare:(id)arg4 locality:(id)arg5 subLocality:(id)arg6 administrativeArea:(id)arg7 subAdministrativeArea:(id)arg8 postalCode:(id)arg9 countryCode:(id)arg10 country:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14;
+ (id)placemarkWithName:(id)arg1 clLocation:(id)arg2;

- (void).cxx_destruct;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 decayRate:(double)arg6 error:(id*)arg7;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)locationRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedLocationsWithQuery:(id)arg1 error:(id*)arg2;
- (void)registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;

@end
