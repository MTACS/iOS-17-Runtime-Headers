
@interface HUHomeHubMigrationBannerItem : HUBannerItem {
    NSSet * _devices;
}

@property (readonly) NSSet *devices;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)devices;
- (id)initWithHome:(id)arg1;

@end
