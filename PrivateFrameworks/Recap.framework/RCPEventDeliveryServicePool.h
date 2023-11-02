
@interface RCPEventDeliveryServicePool : NSObject <RCPEventDeliveryServicePool> {
    NSMutableDictionary * _deliveryServicesBySenderID;
    NSMutableDictionary * _deliveryServicesBySenderProperties;
    <RCPEventDeliveryService> * _fallbackDeliveryService;
    bool  _shouldIgnoreSenderProperties;
}

@property (nonatomic, retain) NSMutableDictionary *deliveryServicesBySenderID;
@property (nonatomic, retain) NSMutableDictionary *deliveryServicesBySenderProperties;
@property (nonatomic, retain) <RCPEventDeliveryService> *fallbackDeliveryService;
@property (nonatomic) bool shouldIgnoreSenderProperties;

- (void).cxx_destruct;
- (id)_findServiceForSenderProperties:(id)arg1;
- (id)deliveryServiceForSenderProperties:(id)arg1;
- (id)deliveryServicesBySenderID;
- (id)deliveryServicesBySenderProperties;
- (id)fallbackDeliveryService;
- (id)init;
- (bool)prewarmForSenderProperties:(id)arg1 withError:(id*)arg2;
- (void)setDeliveryServicesBySenderID:(id)arg1;
- (void)setDeliveryServicesBySenderProperties:(id)arg1;
- (void)setFallbackDeliveryService:(id)arg1;
- (void)setShouldIgnoreSenderProperties:(bool)arg1;
- (bool)shouldIgnoreSenderProperties;
- (void)tearDown;

@end
