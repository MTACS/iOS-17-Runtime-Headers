
@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHelper;

- (void)_resolveItemIdentifierAtURL:(id)arg1 withHandler:(id /* block */)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
- (bool)canFetchAllContainersByID;
- (id)fetchAllContainersByIDWithError:(id*)arg1;
- (id)fetchContainerForMangledID:(id)arg1 personaID:(id)arg2;
- (id)itemIDForURL:(id)arg1 error:(id*)arg2;

@end
