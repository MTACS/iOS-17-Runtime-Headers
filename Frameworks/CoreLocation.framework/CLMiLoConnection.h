
@interface CLMiLoConnection : NSObject {
    CLMiLoConnectionInternal * _internal;
}

@property (nonatomic, readonly) CLMiLoConnectionInternal *_internal;
@property (nonatomic) <CLMiLoConnectionDelegate> *delegate;

- (id)_internal;
- (void)connectServiceWithIdentifier:(id)arg1;
- (void)createServiceWithServiceType:(unsigned long long)arg1 locationTypes:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deleteServiceWithIdentifier:(id)arg1;
- (void)disconnectServiceWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)labelEventWithRequestIdentifier:(id)arg1 withPlaceIdentifier:(id)arg2;
- (id)labelEventsWithStartDate:(id)arg1 endDate:(id)arg2 placeIdentifier:(id)arg3;
- (id)labelObservationWithRequestIdentifier:(id)arg1 withPlaceIdentifier:(id)arg2;
- (id)labelObservationsWithStartDate:(id)arg1 endDate:(id)arg2 placeIdentifier:(id)arg3;
- (id)purgeAllMiLoData;
- (void)queryMiLoConnectionStatus;
- (void)queryMyServices;
- (id)removeLabels:(id)arg1;
- (id)requestExportDatabase;
- (id)requestMiLoPrediction;
- (id)requestModelLearning;
- (id)requestObservation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)startUpdatingMicroLocationWithConfiguration:(id)arg1;
- (id)stopUpdatingMicroLocation;

@end
