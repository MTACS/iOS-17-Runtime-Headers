
@interface ATXModeEntityStore : NSObject {
    NSMutableDictionary * _entityStore;
    ATXModeMetadataConstants * _modeMetadataConstants;
}

- (void).cxx_destruct;
- (id)appEntityForBundleId:(id)arg1;
- (id)init;
- (id)initWithModeMetadataConstants:(id)arg1;

@end
