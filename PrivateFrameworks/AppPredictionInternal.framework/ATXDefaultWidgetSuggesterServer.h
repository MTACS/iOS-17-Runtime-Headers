
@interface ATXDefaultWidgetSuggesterServer : NSObject <ATXDefaultWidgetSuggesterInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)shouldSuggestTVWithCompletionHandler:(id /* block */)arg1;
- (void)updateCachedValuesWithActivity:(id)arg1;

@end
