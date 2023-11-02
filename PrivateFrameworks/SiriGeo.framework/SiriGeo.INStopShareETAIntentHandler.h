
@interface SiriGeo.INStopShareETAIntentHandler : NSObject <INStopShareETAIntentHandling> {
    void contactService;
    void logObject;
    void sharedTripContact;
}

- (void).cxx_destruct;
- (void)confirmStopShareETA:(id)arg1 completion:(id /* block */)arg2;
- (void)handleStopShareETA:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveRecipientsForStopShareETA:(id)arg1 withCompletion:(id /* block */)arg2;

@end
