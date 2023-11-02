
@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)_conferenceStringForURL:(id)arg1 options:(unsigned long long)arg2 outImageNames:(id*)arg3 incomplete:(bool*)arg4;
+ (bool)_conferenceURL:(id)arg1 isSameAsLocationString:(id)arg2;
+ (id)_locationStringsRemovingVirtualConference:(id)arg1 event:(id)arg2;
+ (id)conferenceStringForURL:(id)arg1 options:(unsigned long long)arg2;
+ (id)conferenceStringForURL:(id)arg1 options:(unsigned long long)arg2 incomplete:(bool*)arg3;
+ (id)conferenceURLForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (id)glyphNamesForConferenceString:(id)arg1;
+ (id)labelForLocation:(id)arg1;
+ (id)locationStringForEvent:(id)arg1;
+ (id)locationStringForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (id)locationStringForEvent:(id)arg1 options:(unsigned long long)arg2 incomplete:(bool*)arg3;
+ (id)locationStringForLocation:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3 conferenceURL:(id)arg4;
+ (id)locationStringForLocation:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3 conferenceURL:(id)arg4 options:(unsigned long long)arg5;
+ (id)locationStringForLocation:(id)arg1 locationWithoutPrediction:(id)arg2 preferredLocation:(id)arg3 conferenceURL:(id)arg4 options:(unsigned long long)arg5 incomplete:(bool*)arg6;

@end
