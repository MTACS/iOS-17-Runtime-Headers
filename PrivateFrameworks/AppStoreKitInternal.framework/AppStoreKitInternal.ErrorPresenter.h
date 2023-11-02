
@interface AppStoreKitInternal.ErrorPresenter : NSObject <ASKAirplaneModeInquiryDelegate> {
    void airplaneModeInquiry;
    void cellularDataInquiry;
    void error;
    void networkInquiry;
    void networkObservation;
    void reasonForNoInternet;
    void view;
}

- (void).cxx_destruct;
- (void)airplaneModeInquiryDidObserveChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end
