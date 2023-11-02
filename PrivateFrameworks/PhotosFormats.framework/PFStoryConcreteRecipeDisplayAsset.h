
@interface PFStoryConcreteRecipeDisplayAsset : PFStoryConcreteRecipeAsset <PFStoryRecipeDisplayAsset> {
    long long  _category;
    NSString * _cloudIdentifier;
    NSString * _scheme;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *cloudIdentifier;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSURL *url;

+ (id)URLWithScheme:(id)arg1 cloudIdentifier:(id)arg2;
+ (bool)decomposeURL:(id)arg1 usingBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)category;
- (id)cloudIdentifier;
- (id)initWithIdentifier:(id)arg1 category:(long long)arg2 scheme:(id)arg3 cloudIdentifier:(id)arg4;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2 url:(id)arg3;
- (bool)isEqualToAsset:(id)arg1;
- (id)scheme;

@end
