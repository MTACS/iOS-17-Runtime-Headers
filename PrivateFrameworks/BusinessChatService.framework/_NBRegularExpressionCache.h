
@interface _NBRegularExpressionCache : NSObject {
    NSCache * _cache;
}

@property (nonatomic, retain) NSCache *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cache;
- (id)init;
- (id)regularExpressionForPattern:(id)arg1 error:(id*)arg2;
- (void)setCache:(id)arg1;

@end
