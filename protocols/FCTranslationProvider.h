
@protocol FCTranslationProvider <NSObject>

@required

- (NSString *)favoriteTranslationForTagID:(NSString *)arg1;
- (FCTopicTranslation *)topicTranslationForTagID:(NSString *)arg1;

@end
