
@protocol BookmarksPanelStateRestoring <NSObject>

@required

- (NSDictionary *)currentStateDictionary;
- (bool)restoreStateWithDictionary:(NSDictionary *)arg1;

@end
