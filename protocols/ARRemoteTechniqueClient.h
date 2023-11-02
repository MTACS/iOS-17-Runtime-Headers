
@protocol ARRemoteTechniqueClient <NSObject>

@required

- (void)techniqueDidFailWithError:(NSError *)arg1;
- (void)techniqueDidOutputResultData:(NSArray *)arg1 timestamp:(double)arg2 context:(id <ARResultDataContext>)arg3;

@end
