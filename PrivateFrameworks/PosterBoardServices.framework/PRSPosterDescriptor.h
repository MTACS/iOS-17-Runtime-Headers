
@interface PRSPosterDescriptor : NSObject {
    PRSPosterPath * _path;
    <BSInvalidatable> * _pathValidityExtension;
}

@property (nonatomic, readonly) PRSPosterPath *_path;
@property (nonatomic, readonly, copy) NSURL *assetDirectory;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *role;

- (void).cxx_destruct;
- (id)_initWithPath:(id)arg1;
- (id)_path;
- (id)assetDirectory;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)loadGalleryOptionsWithError:(out id*)arg1;
- (id)loadUserInfoWithError:(out id*)arg1;
- (id)role;

@end
