
@interface MRMediaSuggestionRequest : NSObject <MRMediaSuggestionRequestConfigurable, NSCopying> {
    bool  _includeArtwork;
    unsigned long long  _maxResults;
    NSUUID * _requestIdentifier;
    bool  _useDirectAccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeArtwork;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic, copy) NSUUID *requestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) bool useDirectAccess;

+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)includeArtwork;
- (id)initWithBlock:(id /* block */)arg1;
- (unsigned long long)maxResults;
- (void)performWithCompletion:(id /* block */)arg1;
- (void)performWithPreferences:(id)arg1 completion:(id /* block */)arg2;
- (void)performWithPreferences:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)requestIdentifier;
- (void)setIncludeArtwork:(bool)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setUseDirectAccess:(bool)arg1;
- (bool)useDirectAccess;

@end
