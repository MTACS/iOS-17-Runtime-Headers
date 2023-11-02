
@interface ATXNotificationEvent : NSObject {
    bool  _ending;
    long long  _eventType;
    bool  _fromOffScreen;
    bool  _hiding;
    unsigned long long  _pos;
    bool  _topOfPile;
    NSDate * _ts;
}

@property (nonatomic) long long eventType;
@property (nonatomic) bool fromOffScreen;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) bool topOfPile;
@property (nonatomic, retain) NSDate *ts;

+ (id)clearEventSet;
+ (id)endingEventSet;
+ (id)hidingEventSet;
+ (id)positiveEventSet;

- (void).cxx_destruct;
- (long long)eventType;
- (bool)fromOffScreen;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(bool)arg4;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(bool)arg4 topOfPile:(bool)arg5;
- (bool)isEndingEvent;
- (bool)isHidingEvent;
- (id)pbmsg;
- (unsigned long long)pos;
- (void)setEventType:(long long)arg1;
- (void)setFromOffScreen:(bool)arg1;
- (void)setPos:(unsigned long long)arg1;
- (void)setTopOfPile:(bool)arg1;
- (void)setTs:(id)arg1;
- (bool)topOfPile;
- (id)ts;

@end
