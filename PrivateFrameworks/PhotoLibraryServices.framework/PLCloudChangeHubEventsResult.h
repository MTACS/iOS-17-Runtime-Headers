
@interface PLCloudChangeHubEventsResult : NSObject <PLCloudChangeEventsResult> {
    unsigned long long  _changeHubEventIndex;
    NSObject<OS_xpc_object> * _events;
    long long  _resultType;
}

@property (readonly) unsigned long long changeHubEventIndex;
@property (readonly, copy) NSString *currentTokenDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long resultType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)changeHubEventIndex;
- (id)currentTokenDescription;
- (void)enumerateLocalEventsWithBlock:(id /* block */)arg1;
- (id)initWithResultType:(long long)arg1 events:(id)arg2 changeHubEventIndex:(unsigned long long)arg3;
- (id)initWithSuccesfulEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)localEventFromEvent:(id)arg1;
- (long long)resultType;

@end
