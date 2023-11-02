
@interface MUPlaceItemActionDataProvider : MKPlaceItemActionDataProvider <MKPlaceActionDataProviding> {
    MUPlaceDataAvailability * _availability;
}

@property (nonatomic, readonly) bool canShowCallAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *messagesForBusinessURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAddingPhotos;
@property (nonatomic, readonly) bool supportsMessagesForBusiness;

- (void).cxx_destruct;
- (void)_placeItemDidUpdate;
- (bool)supportsAddingPhotos;
- (bool)supportsMessagesForBusiness;

@end
