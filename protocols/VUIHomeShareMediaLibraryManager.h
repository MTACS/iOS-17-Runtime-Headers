
@protocol VUIHomeShareMediaLibraryManager <NSObject>

@required

- (void)beginDiscoveringMediaLibraries;
- (<VUIHomeShareMediaLibraryManagerDelegate> *)delegate;
- (void)endDiscoveringMediaLibraries;
- (NSArray *)homeShareMediaLibraries;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
- (void)setDelegate:(id <VUIHomeShareMediaLibraryManagerDelegate>)arg1;

@end
