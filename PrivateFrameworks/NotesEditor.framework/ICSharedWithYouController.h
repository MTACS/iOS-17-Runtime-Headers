
@interface ICSharedWithYouController : NSObject {
    ICSharedWithYouControllerInternal * _controller;
}

@property (nonatomic, readonly) ICSharedWithYouControllerInternal *controller;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)controller;
- (void)fetchShareMetadataWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (id)highlightForURL:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)arg1;
- (void)userAcceptedInvitationWithShareMetadata:(id)arg1 associatedObjectID:(id)arg2;

@end
