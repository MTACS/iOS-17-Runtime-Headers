
@interface VUIDocumentContextDataMovieBundle : VUIDocumentContextData {
    NSString * _movieBundleID;
}

@property (nonatomic, readonly, copy) NSString *movieBundleID;

- (void).cxx_destruct;
- (id)initWithMovieBundleID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)movieBundleID;

@end
