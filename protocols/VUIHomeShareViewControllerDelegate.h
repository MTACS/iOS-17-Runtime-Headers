
@protocol VUIHomeShareViewControllerDelegate <NSObject>

@optional

- (void)homeShareViewController:(VUIHomeShareViewController *)arg1 didSelectHomeShare:(VUIMediaLibrary *)arg2;
- (void)homeShareViewController:(VUIHomeShareViewController *)arg1 didUpdateWith:(NSArray *)arg2;

@end
