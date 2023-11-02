
@interface MPStoreItemLibraryImportElement : NSObject {
    NSDictionary * _additionalTrackMetadata;
    long long  _storeItemID;
}

@property (nonatomic, readonly) NSDictionary *additionalTrackMetadata;
@property (nonatomic, readonly) long long storeItemID;

- (void).cxx_destruct;
- (id)additionalTrackMetadata;
- (id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2;
- (id)storeItem;
- (long long)storeItemID;

@end
