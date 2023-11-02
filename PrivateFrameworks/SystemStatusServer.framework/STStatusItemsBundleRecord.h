
@interface STStatusItemsBundleRecord : STBundleRecord_Base {
    NSSet * _statusItemIdentifiers;
    NSDictionary * _statusItemsToVisualDescriptors;
}

@property (nonatomic, readonly, copy) NSSet *statusItemIdentifiers;

+ (id)recordType;

- (void).cxx_destruct;
- (id)initWithBundleInfoDictionary:(id)arg1 bundleRecordIdentifier:(id)arg2 bundleURL:(id)arg3;
- (id)statusItemIdentifiers;
- (id)visualDescriptorForStatusItemWithIdentifier:(id)arg1;

@end
