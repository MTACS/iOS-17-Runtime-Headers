
@interface SiriGeo.INSaveParkingLocationIntentHandler : NSObject <INSaveParkingLocationIntentHandling> {
    void completion;
    void locationController;
    void logObject;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleSaveParkingLocation:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveParkingLocationForSaveParkingLocation:(id)arg1 withCompletion:(id /* block */)arg2;

@end
