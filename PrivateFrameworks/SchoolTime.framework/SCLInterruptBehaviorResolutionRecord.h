
@interface SCLInterruptBehaviorResolutionRecord : NSObject <NSCopying> {
    NSUUID * _UUID;
    NSString * _clientIdentifier;
    NSDate * _date;
    SCLInterruptEventBehavior * _eventBehavior;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) SCLInterruptEventBehavior *eventBehavior;

+ (id)resolutionRecordForDate:(id)arg1 eventBehavior:(id)arg2 clientIdentifier:(id)arg3;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 date:(id)arg2 eventBehavior:(id)arg3 clientIdentifier:(id)arg4;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)eventBehavior;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
