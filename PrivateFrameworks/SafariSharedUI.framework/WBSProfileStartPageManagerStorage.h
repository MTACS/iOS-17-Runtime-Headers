
@interface WBSProfileStartPageManagerStorage : NSObject <WBSStartPageSectionManagerStorage, WBTabGroupManagerObserver> {
    NSString * _profileIdentifier;
    WBTabGroupManager * _tabGroupManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *profileIdentifier;
@property (nonatomic, copy) NSArray *startPageSectionDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProfileIdentifier:(id)arg1 tabGroupManager:(id)arg2;
- (id)profileIdentifier;
- (void)setStartPageSectionDescriptors:(id)arg1;
- (id)startPageSectionDescriptors;
- (id)startPageSectionsDataRepresentation;
- (id)tabGroupManager;
- (void)tabGroupManager:(id)arg1 didUpdateProfileWithIdentifier:(id)arg2 difference:(id)arg3;

@end
