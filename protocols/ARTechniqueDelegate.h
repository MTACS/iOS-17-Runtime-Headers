
@protocol ARTechniqueDelegate <NSObject>

@required

- (void)technique:(ARTechnique *)arg1 didFailWithError:(NSError *)arg2;
- (void)technique:(ARTechnique *)arg1 didOutputResultData:(NSArray *)arg2 timestamp:(double)arg3 context:(id <ARResultDataContext>)arg4;

@end
