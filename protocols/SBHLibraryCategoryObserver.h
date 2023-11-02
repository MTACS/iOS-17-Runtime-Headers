
@protocol SBHLibraryCategoryObserver <NSObject>

@optional

- (void)category:(SBHLibraryCategory *)arg1 didUpdateIconsWithinFolder:(SBFolder *)arg2;
- (void)category:(SBHLibraryCategory *)arg1 willUpdateIconsWithinFolder:(SBFolder *)arg2;
- (void)categoryDidUpdate:(SBHLibraryCategory *)arg1;
- (void)categoryWillUpdate:(SBHLibraryCategory *)arg1;

@end
