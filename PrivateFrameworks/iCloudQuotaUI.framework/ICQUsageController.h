
@interface ICQUsageController : PSListController {
    ICQCloudStorageGroupController * _cloudGroup;
    PSSpecifier * _storageAvailableSpecifier;
    NSMutableArray * _storageSpecifiers;
    PSSpecifier * _storageUsedSpecifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)usageStorageSpecifiers;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
