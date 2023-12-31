
@interface PKActivityEvent : NSObject {
    NSDate * _date;
    NSString * _eventType;
    NSString * _identifier;
    bool  _unread;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isUnread, nonatomic, readonly) bool unread;

+ (id)eventsWithTransactions:(id)arg1;

- (void).cxx_destruct;
- (id)date;
- (id)eventType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivityEvent:(id)arg1;
- (bool)isUnread;

@end
