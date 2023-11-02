
@interface PLMoviePlayerControllerManager : NSObject {
    NSMutableArray * _playerStack;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)moveControllerToTopOfStack:(id)arg1;
- (void)removeControllerFromStack:(id)arg1;

@end
