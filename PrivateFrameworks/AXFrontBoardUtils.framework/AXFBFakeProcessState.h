
@interface AXFBFakeProcessState : NSObject {
    int  _pid;
}

@property (nonatomic) int pid;

- (int)pid;
- (void)setPid:(int)arg1;

@end
