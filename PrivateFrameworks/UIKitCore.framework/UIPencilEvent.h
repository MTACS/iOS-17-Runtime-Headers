
@interface UIPencilEvent : UIEvent {
    NSHashTable * _trackedInteractions;
}

@property (nonatomic, retain) NSHashTable *trackedInteractions;

- (void).cxx_destruct;
- (id)_init;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)setTrackedInteractions:(id)arg1;
- (long long)subtype;
- (id)trackedInteractions;
- (long long)type;

@end
