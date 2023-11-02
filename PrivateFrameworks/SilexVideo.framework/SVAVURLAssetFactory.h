
@interface SVAVURLAssetFactory : NSObject <SVAVURLAssetFactory> {
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createURLAssetWithURL:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)options;

@end
