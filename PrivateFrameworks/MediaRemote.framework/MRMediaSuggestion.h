
@interface MRMediaSuggestion : NSObject {
    MRArtwork * _artwork;
    NSString * _bundleID;
    INMediaItem * _container;
    INPlayMediaIntent * _intent;
}

@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) MRArtwork *artwork;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)artist;
- (id)artwork;
- (id)bundleID;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIntent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)playOnDeviceWithUID:(id)arg1 completion:(id /* block */)arg2;
- (void)playOnEndpoint:(id)arg1 completion:(id /* block */)arg2;
- (void)playWithCompletion:(id /* block */)arg1;
- (id)title;

@end
