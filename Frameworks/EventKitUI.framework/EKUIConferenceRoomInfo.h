
@interface EKUIConferenceRoomInfo : NSObject {
    EKRequestAvailabilityOperation * _availabilityRequest;
    NSArray * _availabilitySpans;
    long long  _availabilityType;
}

@property (nonatomic, retain) EKRequestAvailabilityOperation *availabilityRequest;
@property (nonatomic, retain) NSArray *availabilitySpans;
@property long long availabilityType;

- (void).cxx_destruct;
- (id)availabilityRequest;
- (id)availabilitySpans;
- (long long)availabilityType;
- (id)init;
- (void)setAvailabilityRequest:(id)arg1;
- (void)setAvailabilitySpans:(id)arg1;
- (void)setAvailabilityType:(long long)arg1;

@end
