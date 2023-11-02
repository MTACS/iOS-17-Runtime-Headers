
@interface PBSlideState : NSObject {
    NSMutableDictionary * mBuildOrderMap;
    unsigned int  mCurrentGroupId;
}

- (void).cxx_destruct;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (id)buildOrderMap;
- (unsigned int)generateGroupId;
- (id)init;
- (void)reset;

@end
