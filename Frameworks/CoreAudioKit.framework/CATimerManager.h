
@interface CATimerManager : NSObject {
    id  timerSource;
}

@property (nonatomic) id timerSource;

+ (id)getWeakReferenceOfObject:(id)arg1;

- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
