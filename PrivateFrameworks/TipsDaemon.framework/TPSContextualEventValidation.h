
@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate> {
    id /* block */  _completionHandler;
    TPSContextualEvent * _event;
    TPSEventsProvider * _eventProvider;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPSContextualEvent *event;
@property (nonatomic, retain) TPSEventsProvider *eventProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_contextualEventFromEventDictionary:(id)arg1;
+ (id)_eventProviderForContextualEvent:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)dataProvider:(id)arg1 didFinishQueryWithResults:(id)arg2;
- (void)dataProvider:(id)arg1 didReceiveCallbackWithResult:(id)arg2;
- (id)event;
- (id)eventProvider;
- (id)initWithContextualEvent:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setEvent:(id)arg1;
- (void)setEventProvider:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
