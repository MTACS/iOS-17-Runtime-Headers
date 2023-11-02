
@interface SWLoader : NSObject {
    id /* block */  _loadBlock;
}

@property (nonatomic, readonly) id /* block */ loadBlock;

+ (id)loaderWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)load;
- (id /* block */)loadBlock;

@end
