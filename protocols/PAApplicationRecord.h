
@protocol PAApplicationRecord <PABundleRecord>

@required

- (<PAAppClipMetadata> *)appClipMetadata;
- (NSArray *)appTags;
- (NSSet *)applicationExtensionRecords;

@end
