
@interface WFRemoteContentItem : WFGenericFileContentItem {
    NSDictionary * _serializedItem;
}

@property (nonatomic, copy) NSDictionary *serializedItem;

+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5;

- (void).cxx_destruct;
- (id)initWithSerializedItem:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4;
- (id)metadataForSerialization;
- (id)name;
- (id)preferredFileType;
- (id)serializedItem;
- (void)setSerializedItem:(id)arg1;

@end
