
@interface PIParallaxStyleUserURLProvider : NSObject <PIParallaxStyleURLProvider> {
    NSURL * _baseURL;
}

@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)baseURL;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (id)urlForIdentifier:(id)arg1;

@end
