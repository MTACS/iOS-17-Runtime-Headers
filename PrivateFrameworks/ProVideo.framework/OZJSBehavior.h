
@interface OZJSBehavior : NSObject <OZBehaviorJSExport> {
    void * _behavior;
}

@property (nonatomic) void*behavior;

+ (id)behaviorWithBehavior:(void*)arg1;

- (void*)behavior;
- (id)initWithBehavior:(void*)arg1;
- (void)setBehavior:(void*)arg1;
- (void)setStartTime:(float)arg1;

@end
