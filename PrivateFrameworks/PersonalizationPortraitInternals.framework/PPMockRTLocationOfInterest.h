
@interface PPMockRTLocationOfInterest : NSObject {
    PPMockRTMapItem * _mapItem;
    long long  _type;
    NSArray * _visits;
}

@property (nonatomic, retain) PPMockRTMapItem *mapItem;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSArray *visits;

+ (id)mockLocationOfInterestWithSubThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 administrativeAreaCode:(id)arg6 postalCode:(id)arg7 country:(id)arg8 countryCode:(id)arg9 longitude:(double)arg10 latitude:(double)arg11 visits:(id)arg12;

- (void).cxx_destruct;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (void)setVisits:(id)arg1;
- (long long)type;
- (id)visits;

@end
