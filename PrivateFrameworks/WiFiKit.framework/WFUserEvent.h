
@interface WFUserEvent : NSObject <WFUIEvent> {
    NSDictionary * _eventDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *eventDictionary;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithType:(long long)arg1;
+ (id)eventWithType:(long long)arg1 state:(bool)arg2;
+ (id)eventWithType:(long long)arg1 stateEnum:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)_eventTypeStringForType:(long long)arg1;
- (id)eventDictionary;
- (id)eventName;
- (id)initWithType:(long long)arg1 state:(bool)arg2 stateEnum:(unsigned int)arg3;

@end
