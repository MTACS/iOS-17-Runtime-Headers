
@protocol ICHashtagAnalyticsDelegate <NSObject>

@required

- (void)hashtagInsertedInNote:(ICNote *)arg1 tokenContentIdentifier:(NSString *)arg2 viaAutoComplete:(bool)arg3;

@end
