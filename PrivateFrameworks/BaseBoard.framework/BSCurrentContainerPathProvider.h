
@interface BSCurrentContainerPathProvider : NSObject <BSPathProviding>

@property (nonatomic, readonly) NSURL *cachesPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *defaultPath;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *libraryPath;
@property (readonly) Class superclass;

- (id)cachesPath;
- (id)defaultPath;
- (id)libraryPath;

@end
