
@interface ACCComponents : ACFComponents {
    <ACCSSOTGTStoragePolicy> * _tgtStoragePolicy;
    <ACCTicketManagerProtocol> * _ticketManager;
}

@property (nonatomic, retain) <ACCSSOTGTStoragePolicy> *tgtStoragePolicy;
@property (nonatomic, retain) <ACCTicketManagerProtocol> *ticketManager;

+ (id)components;
+ (id)defaultComponents;

- (id)createHandlerWithClass:(Class)arg1 context:(id)arg2;
- (void)dealloc;
- (void)setTgtStoragePolicy:(id)arg1;
- (void)setTicketManager:(id)arg1;
- (id)tgtStoragePolicy;
- (id)ticketManager;

@end
