
@interface MPStoreItemImportTrackData : ML3StoreItemTrackData {
    NSArray * _importElements;
}

@property (nonatomic, readonly) NSArray *importElements;

+ (id)_importPropertiesDictFromImportMetadataDict:(id)arg1;

- (void).cxx_destruct;
- (id)_associatedElementForPropertyDict:(id)arg1;
- (id)importElements;
- (id)initWithImportElements:(id)arg1;
- (id)parsedStoreItemsImportProperties;

@end
