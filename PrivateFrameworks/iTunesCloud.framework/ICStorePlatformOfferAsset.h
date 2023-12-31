
@interface ICStorePlatformOfferAsset : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double previewDuration;
@property (nonatomic, readonly, copy) NSURL *previewURL;
@property (nonatomic, readonly) long long size;

- (void).cxx_destruct;
- (double)duration;
- (id)initWithResponseDictionary:(id)arg1;
- (double)previewDuration;
- (id)previewURL;
- (long long)size;

@end
