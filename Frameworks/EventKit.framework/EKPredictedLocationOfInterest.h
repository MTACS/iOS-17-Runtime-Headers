
@interface EKPredictedLocationOfInterest : NSObject {
    NSString * _addressCountryCode;
    NSString * _addressLocality;
    NSString * _addressThoroughfare;
    NSString * _customLabel;
    NSString * _mapItemName;
    RTPredictedLocationOfInterest * _rtPredictedLocationOfInterest;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *addressCountryCode;
@property (nonatomic, readonly, copy) NSString *addressLocality;
@property (nonatomic, readonly, copy) NSString *addressThoroughfare;
@property (nonatomic, readonly, copy) NSString *customLabel;
@property (nonatomic, readonly, copy) NSString *mapItemName;
@property (nonatomic, readonly) RTPredictedLocationOfInterest *rtPredictedLocationOfInterest;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)addressCountryCode;
- (id)addressLocality;
- (id)addressThoroughfare;
- (id)customLabel;
- (id)initWithPredictedLocationOfInterest:(id)arg1;
- (id)initWithType:(long long)arg1 customLabel:(id)arg2 mapItemName:(id)arg3 addressCountryCode:(id)arg4 addressThoroughFare:(id)arg5 addressLocality:(id)arg6;
- (id)mapItemName;
- (id)rtPredictedLocationOfInterest;
- (long long)type;

@end
