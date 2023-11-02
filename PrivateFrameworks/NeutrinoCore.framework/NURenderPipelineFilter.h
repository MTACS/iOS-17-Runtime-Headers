
@interface NURenderPipelineFilter : NSObject {
    id /* block */  _filterBlock;
}

@property (nonatomic, readonly) id /* block */ filterBlock;

+ (id)stopAtTagFilter:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)filterBlock;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;

@end
