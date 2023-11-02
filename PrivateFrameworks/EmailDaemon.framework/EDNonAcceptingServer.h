
@interface EDNonAcceptingServer : NSObject <EFLoggable, NSXPCListenerDelegate> {
    NSMutableArray * _listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *listeners;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithMachServiceNames:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listeners;
- (void)setListeners:(id)arg1;

@end
