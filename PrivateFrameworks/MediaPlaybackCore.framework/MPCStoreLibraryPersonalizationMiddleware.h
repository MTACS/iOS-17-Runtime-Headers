
@interface MPCStoreLibraryPersonalizationMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {
    NSArray * _invalidationObservers;
    MPSectionedCollection * _personalizedModelObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic, retain) MPSectionedCollection *personalizedModelObjects;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)personalizedModelObjects;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;
- (void)setInvalidationObservers:(id)arg1;
- (void)setPersonalizedModelObjects:(id)arg1;

@end
