
@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext> {
    bool  _ended;
    double  _maximumProgress;
    double  _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool ended;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumProgress;
@property (nonatomic) double progress;
@property (readonly) Class superclass;

- (bool)ended;
- (double)maximumProgress;
- (double)progress;
- (void)setEnded:(bool)arg1;
- (void)setMaximumProgress:(double)arg1;
- (void)setProgress:(double)arg1;

@end
