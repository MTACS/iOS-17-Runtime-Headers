
@interface ATXSafariIntentEventQualityFilter : NSObject {
    ATXContextKitClient * _ckClient;
}

@property (nonatomic, readonly) ATXContextKitClient *ckClient;

- (void).cxx_destruct;
- (id)ckClient;
- (id)init;
- (id)initWithContextKitClient:(id)arg1;
- (bool)shouldAcceptSafariDonation:(id)arg1;
- (bool)shouldBlockURLForObjectionableContent:(id)arg1;

@end
