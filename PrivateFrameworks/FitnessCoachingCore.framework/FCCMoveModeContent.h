
@interface FCCMoveModeContent : NSObject <FCCDataSerializable> {
    double  _delay;
    long long  _nextActivityMoveMode;
    NSDate * _nextActivityMoveModeStartDate;
    long long  _notificationType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long nextActivityMoveMode;
@property (nonatomic, readonly) NSDate *nextActivityMoveModeStartDate;
@property (nonatomic, readonly) long long notificationType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)delay;
- (id)description;
- (id)initWithNotificationType:(long long)arg1 nextActivityMoveMode:(long long)arg2 nextActivityMoveModeStartDate:(id)arg3 delay:(double)arg4;
- (id)initWithTransportData:(id)arg1;
- (long long)nextActivityMoveMode;
- (id)nextActivityMoveModeStartDate;
- (long long)notificationType;
- (id)transportData;

@end
