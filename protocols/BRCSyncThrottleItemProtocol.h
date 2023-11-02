
@protocol BRCSyncThrottleItemProtocol

@required

- (NSString *)appLibraryID;
- (NSString *)extension;
- (BRCItemID *)itemID;
- (NSString *)logicalName;
- (NSString *)path;

@end
