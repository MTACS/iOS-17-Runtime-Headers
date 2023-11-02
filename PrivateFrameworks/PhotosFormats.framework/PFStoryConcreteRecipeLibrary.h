
@interface PFStoryConcreteRecipeLibrary : NSObject <PFStoryRecipeLibrary> {
    long long  _kind;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithKind:(long long)arg1 url:(id)arg2;
- (bool)isEqualToLibrary:(id)arg1;
- (long long)kind;
- (id)url;

@end
