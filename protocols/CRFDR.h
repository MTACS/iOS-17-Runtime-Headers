
@protocol CRFDR <NSObject>

@required

- (long long)registerChangeForComponent:(NSString *)arg1 fdrError:(id*)arg2;
- (long long)seal:(id*)arg1 oldSealingManifest:(id*)arg2 newSealingManifest:(id*)arg3 stats:(id*)arg4;

@end
