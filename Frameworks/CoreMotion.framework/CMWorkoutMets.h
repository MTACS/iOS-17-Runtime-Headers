
@interface CMWorkoutMets : NSObject {
    CMWorkoutMetsInternal * _internal;
}

@property (nonatomic, readonly) CMWorkoutMetsInternal *_internal;

+ (bool)isAvailable;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(id /* block */)arg2;

@end
