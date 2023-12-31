
@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>

@required

- (TSKAnnotationAuthor *)author;
- (void)commitText:(NSString *)arg1;
- (NSDate *)date;
- (bool)isEqual:(id)arg1;
- (<TSKModel> *)model;
- (void)setAuthor:(TSKAnnotationAuthor *)arg1;
- (void)setModel:(id <TSKModel>)arg1;

@optional

- (NSString *)changeTrackingString;
- (TSKCommand *)commandForDeletingComment;
- (void)setStorage:(TSDCommentStorage *)arg1;
- (TSDCommentStorage *)storage;

@end
