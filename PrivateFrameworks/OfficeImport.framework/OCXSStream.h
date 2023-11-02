
@interface OCXSStream : NSObject {
    NSMutableArray * mLevelStack;
}

- (void).cxx_destruct;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (bool)hasLevels;
- (id)init;
- (bool)popLevel;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;

@end
