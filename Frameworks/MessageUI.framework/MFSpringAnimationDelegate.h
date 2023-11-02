
@interface MFSpringAnimationDelegate : NSObject {
    NSMutableArray * _completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)completionBlocks;
- (id)init;

@end
