
@protocol PXStoryChapter

@required

- (NSString *)diagnosticDescription;
- (NSObject<NSCopying> *)identifier;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;

@end
