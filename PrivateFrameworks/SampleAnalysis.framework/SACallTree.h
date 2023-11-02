
@interface SACallTree : NSObject {
    NSArray * _rootObjects;
}

@property (readonly) NSArray *rootFrames;
@property (readonly) NSArray *rootObjects;

- (void).cxx_destruct;
- (void)enumerateCallTreeFrames:(id /* block */)arg1;
- (id)initWithRootObjects:(id)arg1;
- (id)rootFrames;
- (id)rootObjects;

@end
