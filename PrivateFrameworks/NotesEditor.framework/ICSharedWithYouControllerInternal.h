
@interface ICSharedWithYouControllerInternal : NSObject <SWHighlightCenterDelegate> {
    void accountsDidChangeObserver;
    void highlightCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void managedObjectContext;
    void objectIdsOfEditedNotes;
    void processHighlightsQueue;
    void shareObservers;
    void viewContextDidSaveObserver;
    void viewContextObjectsDidChangeObserver;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchShareMetadataWithURLs:(id)arg1 completion:(id /* block */)arg2;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)highlightForURL:(id)arg1;
- (id)init;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)arg1;
- (void)userAcceptedInvitationWithShareMetadata:(id)arg1 associatedObjectID:(id)arg2;

@end
