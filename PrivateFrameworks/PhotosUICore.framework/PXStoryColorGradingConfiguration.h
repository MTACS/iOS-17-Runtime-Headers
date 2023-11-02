
@interface PXStoryColorGradingConfiguration : NSObject {
    NSArray * _cubeInfos;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *cubeInfos;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)cubeInfos;
- (id)init;
- (id)initWithCubeInfos:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
