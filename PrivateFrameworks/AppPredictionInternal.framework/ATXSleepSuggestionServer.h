
@interface ATXSleepSuggestionServer : NSObject <ATXSleepSuggestionInterface, NSXPCListenerDelegate> {
    NSArray * _events;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *events;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)events;
- (id)init;
- (id)initWithEvents:(id)arg1;
- (bool)isSleepScheduleBetweenTheBoundariesWithBedtime:(id)arg1 wakeupTime:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)arg1;
- (id)queryEvents;
- (void)setEvents:(id)arg1;
- (void)setListener:(id)arg1;

@end
