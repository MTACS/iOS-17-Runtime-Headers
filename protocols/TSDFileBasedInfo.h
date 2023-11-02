
@protocol TSDFileBasedInfo

@required

- (TSPData *)fileDataForDragging;
- (NSString *)fileDisplayName;
- (NSString *)fileType;

@end
