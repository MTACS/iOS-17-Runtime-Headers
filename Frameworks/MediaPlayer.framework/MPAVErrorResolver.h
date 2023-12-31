
@interface MPAVErrorResolver : NSObject {
    <MPAVErrorResolverDelegate> * _delegate;
}

@property (nonatomic) <MPAVErrorResolverDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)resolveError:(id)arg1;
- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;
- (void)setDelegate:(id)arg1;

@end
