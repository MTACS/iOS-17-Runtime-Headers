
@interface CEMDeviceLostmodeLocationCommand_Status : CEMPayloadBase {
    NSNumber * _statusAltitude;
    NSNumber * _statusCourse;
    NSNumber * _statusHorizontalAccuracy;
    NSNumber * _statusLatitude;
    NSNumber * _statusLongitude;
    NSNumber * _statusSpeed;
    NSString * _statusTimestamp;
    NSNumber * _statusVerticalAccuracy;
}

@property (nonatomic, copy) NSNumber *statusAltitude;
@property (nonatomic, copy) NSNumber *statusCourse;
@property (nonatomic, copy) NSNumber *statusHorizontalAccuracy;
@property (nonatomic, copy) NSNumber *statusLatitude;
@property (nonatomic, copy) NSNumber *statusLongitude;
@property (nonatomic, copy) NSNumber *statusSpeed;
@property (nonatomic, copy) NSString *statusTimestamp;
@property (nonatomic, copy) NSNumber *statusVerticalAccuracy;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;
+ (id)buildWithLatitude:(id)arg1 withLongitude:(id)arg2 withHorizontalAccuracy:(id)arg3 withVerticalAccuracy:(id)arg4 withAltitude:(id)arg5 withSpeed:(id)arg6 withCourse:(id)arg7 withTimestamp:(id)arg8;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusAltitude:(id)arg1;
- (void)setStatusCourse:(id)arg1;
- (void)setStatusHorizontalAccuracy:(id)arg1;
- (void)setStatusLatitude:(id)arg1;
- (void)setStatusLongitude:(id)arg1;
- (void)setStatusSpeed:(id)arg1;
- (void)setStatusTimestamp:(id)arg1;
- (void)setStatusVerticalAccuracy:(id)arg1;
- (id)statusAltitude;
- (id)statusCourse;
- (id)statusHorizontalAccuracy;
- (id)statusLatitude;
- (id)statusLongitude;
- (id)statusSpeed;
- (id)statusTimestamp;
- (id)statusVerticalAccuracy;

@end
