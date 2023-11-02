
@protocol LibraryItemOpenHandler <NSObject>

@required

- (NSString *)activeLibraryType;
- (void)openLibrary:(NSString *)arg1;

@end
