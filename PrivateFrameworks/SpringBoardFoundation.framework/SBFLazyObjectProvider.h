
@interface SBFLazyObjectProvider : NSObject {
    id /* block */  _generator;
    id  _object;
}

@property (nonatomic, copy) id /* block */ generator;
@property (nonatomic, retain) id object;

- (void).cxx_destruct;
- (id /* block */)generator;
- (id)initWithGenerator:(id /* block */)arg1;
- (id)object;
- (void)setGenerator:(id /* block */)arg1;
- (void)setObject:(id)arg1;

@end
