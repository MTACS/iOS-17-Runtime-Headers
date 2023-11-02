
@interface CADisplayFlipBook : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, retain) CAContext *context;

+ (id)new;

- (double)cancelAtTime:(double)arg1;
- (unsigned long long)capacity;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)purge;
- (bool)renderForTime:(double)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setContext:(id)arg1;
- (void)setPurgeable;

@end
