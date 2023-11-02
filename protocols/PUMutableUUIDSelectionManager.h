
@protocol PUMutableUUIDSelectionManager <NSObject>

@required

- (void)addSelectedUUID:(NSString *)arg1;
- (void)deselectAllUUIDs;
- (void)removeSelectedUUID:(NSString *)arg1;
- (void)setSelectedUUIDs:(NSSet *)arg1;

@end
