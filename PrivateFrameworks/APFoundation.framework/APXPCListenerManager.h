
@interface APXPCListenerManager : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary * _delegates;
    NSMutableArray * _listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *listeners;
@property (readonly) Class superclass;

+ (void)addDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listeners;
- (void)setDelegates:(id)arg1;
- (void)setListeners:(id)arg1;

@end
