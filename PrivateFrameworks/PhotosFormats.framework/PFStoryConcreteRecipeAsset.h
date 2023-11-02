
@interface PFStoryConcreteRecipeAsset : NSObject <PFStoryRecipeAsset> {
    NSString * _identifier;
    long long  _kind;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2 url:(id)arg3;
- (bool)isEqualToAsset:(id)arg1;
- (long long)kind;
- (id)url;

@end
