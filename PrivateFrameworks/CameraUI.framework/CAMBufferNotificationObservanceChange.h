
@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange {
    NSString * _notification;
    NSObject * _object;
}

@property (nonatomic, readonly, copy) NSString *notification;
@property (nonatomic, readonly) NSObject *object;

- (void).cxx_destruct;
- (id)initWithNotification:(id)arg1 object:(id)arg2;
- (id)notification;
- (id)object;

@end
