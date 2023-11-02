
@interface MKPlaceActionDataProvider : NSObject <MKPlaceActionDataProviding>

@property (nonatomic, readonly) bool canShowCallAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *messagesForBusinessURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAddingPhotos;
@property (nonatomic, readonly) bool supportsMessagesForBusiness;

- (bool)canShowCallAction;
- (id)messagesForBusinessURL;
- (bool)supportsAddingPhotos;
- (bool)supportsMessagesForBusiness;

@end
