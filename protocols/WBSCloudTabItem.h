
@protocol WBSCloudTabItem <NSObject, WBSTabItemSearchSupport>

@required

- (bool)hasSameUUIDAndURLAsTab:(id <WBSCloudTabItem>)arg1;
- (bool)isPinned;
- (bool)isShowingReader;
- (NSDictionary *)readerScrollPositionDictionary;
- (NSString *)title;
- (NSURL *)url;
- (NSString *)uuidString;

@end
