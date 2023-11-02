
@interface MPStoreItemOfferAsset : NSObject {
    NSDictionary * _lookupDictionary;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *flavor;
@property (nonatomic, readonly, copy) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) double previewDuration;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly) long long size;

- (void).cxx_destruct;
- (double)duration;
- (id)flavor;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (double)previewDuration;
- (id)previewURL;
- (long long)size;

@end
