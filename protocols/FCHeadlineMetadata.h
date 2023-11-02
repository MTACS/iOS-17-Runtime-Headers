
@protocol FCHeadlineMetadata <NSObject>

@required

- (NSDate *)displayDate;
- (NSString *)storyType;

@optional

- (FCHeadlineThumbnailMetadata *)formatThumbnail;
- (NSString *)shortExcerpt;
- (NSString *)title;

@end
