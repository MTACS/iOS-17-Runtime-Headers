
@interface SASSignalConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (readonly) Class superclass;

+ (id)listener;
+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setListener:(id)arg1;

@end
