
@interface ANRapportEventStreamHandler : NSObject {
    NSMutableDictionary * _rapportActivationHandlers;
}

@property (nonatomic, readonly) NSMutableDictionary *rapportActivationHandlers;

- (void).cxx_destruct;
- (void)addAnnounceRapportServiceType;
- (void)addRapportServiceType:(id)arg1 activationBlock:(id /* block */)arg2;
- (id)init;
- (id)rapportActivationHandlers;
- (void)setEventStreamHandler;

@end
