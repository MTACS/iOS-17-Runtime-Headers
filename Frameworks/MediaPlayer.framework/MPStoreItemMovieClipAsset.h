
@interface MPStoreItemMovieClipAsset : NSObject {
    NSDictionary * _lookupDictionary;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *flavor;
@property (nonatomic, readonly, copy) NSURL *hlsURL;
@property (nonatomic, readonly, copy) NSDictionary *lookupDictionary;
@property (nonatomic, readonly, copy) NSURL *url;

- (void).cxx_destruct;
- (double)duration;
- (id)flavor;
- (id)hlsURL;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (id)url;

@end
