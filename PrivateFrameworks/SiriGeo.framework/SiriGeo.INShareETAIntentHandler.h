
@interface SiriGeo.INShareETAIntentHandler : NSObject <INShareETAIntentHandling> {
    void contactService;
    void logObject;
    void sharedTripContact;
}

- (void).cxx_destruct;
- (void)confirmShareETA:(id)arg1 completion:(id /* block */)arg2;
- (void)handleShareETA:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveRecipientsForShareETA:(id)arg1 withCompletion:(id /* block */)arg2;

@end
