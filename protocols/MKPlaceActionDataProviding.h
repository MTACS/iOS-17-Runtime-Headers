
@protocol MKPlaceActionDataProviding <NSObject>

@required

- (bool)canShowCallAction;
- (NSURL *)messagesForBusinessURL;
- (bool)supportsAddingPhotos;
- (bool)supportsMessagesForBusiness;

@end
