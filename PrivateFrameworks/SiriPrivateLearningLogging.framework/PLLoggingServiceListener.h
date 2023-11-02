
@interface PLLoggingServiceListener : NSObject {
    <NSXPCListenerDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (nonatomic, retain) <NSXPCListenerDelegate> *delegate;
@property (nonatomic, retain) NSXPCListener *listener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)listener;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;

@end
