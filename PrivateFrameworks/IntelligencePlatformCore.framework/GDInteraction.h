
@interface GDInteraction : NSObject {
    NSString * _bundleId;
    long long  _direction;
    NSDate * _endDate;
    long long  _mechanism;
    NSArray * _recipients;
    long long  _selfParticipantStatus;
    GDContact * _sender;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long mechanism;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) long long selfParticipantStatus;
@property (nonatomic, readonly) GDContact *sender;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)bundleId;
- (long long)direction;
- (id)endDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 bundleId:(id)arg3 mechanism:(long long)arg4 direction:(long long)arg5 sender:(id)arg6 recipients:(id)arg7 selfParticipantStatus:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (long long)mechanism;
- (id)recipients;
- (long long)selfParticipantStatus;
- (id)sender;
- (id)startDate;

@end
