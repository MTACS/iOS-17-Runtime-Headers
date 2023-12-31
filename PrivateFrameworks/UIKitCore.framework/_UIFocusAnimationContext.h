
@interface _UIFocusAnimationContext : NSObject <UIFocusAnimationContext> {
    double  _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)duration;
- (id)initWithDuration:(double)arg1;

@end
