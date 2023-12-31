
@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (int)currentNATType;
- (id)delegate;
- (id)initWithOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shouldTryNATCheck;

@end
