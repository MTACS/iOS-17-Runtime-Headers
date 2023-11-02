
@interface STBackgroundActivitiesBundleRecord : STBundleRecord_Base {
    NSDictionary * _backgroundActivitiesToVisualDescriptors;
    NSSet * _backgroundActivityIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *backgroundActivityIdentifiers;

+ (id)recordType;

- (void).cxx_destruct;
- (id)backgroundActivityIdentifiers;
- (id)initWithBundleInfoDictionary:(id)arg1 bundleRecordIdentifier:(id)arg2 bundleURL:(id)arg3;
- (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)arg1;

@end
