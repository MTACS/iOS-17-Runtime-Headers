
@interface TSUManagedTemporaryDirectory : NSObject {
    NSURL * _URL;
}

@property (nonatomic, readonly) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (void)dealloc;
- (id)init;
- (id)initWithURL:(id)arg1;

@end
