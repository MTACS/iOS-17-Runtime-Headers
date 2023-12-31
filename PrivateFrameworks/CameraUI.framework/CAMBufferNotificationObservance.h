
@interface CAMBufferNotificationObservance : CAMBufferObservance {
    NSString * _notification;
    NSNotificationCenter * _notificationCenter;
    NSObject * _object;
}

@property (nonatomic, readonly, copy) NSString *notification;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSObject *object;

- (void).cxx_destruct;
- (void)fulfillWithChange:(id)arg1;
- (id)initWithNotification:(id)arg1 object:(id)arg2 center:(id)arg3 removeOnceEnabled:(bool)arg4;
- (id)notification;
- (id)notificationCenter;
- (id)object;
- (void)setupObservanceForBuffer:(id)arg1;
- (void)teardownObservanceForBuffer:(id)arg1;

@end
