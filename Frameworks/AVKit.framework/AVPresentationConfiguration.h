
@interface AVPresentationConfiguration : NSObject {
    double  _transitionDuration;
    unsigned long long  _transitionStyle;
}

@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly) unsigned long long transitionStyle;

+ (id)configurationWithTransitionStyle:(unsigned long long)arg1 transitionDuration:(double)arg2;

- (double)transitionDuration;
- (unsigned long long)transitionStyle;

@end
