
@interface SXOEmbedResponse : SXJSONObject

@property (nonatomic, readonly) NSString *authorName;
@property (nonatomic, readonly) NSURL *authorURL;
@property (nonatomic, readonly) double cacheAge;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) NSURL *providerURL;
@property (nonatomic, readonly) double thumbnailHeight;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;
@property (nonatomic, readonly) NSURL *thumbnailURL;
@property (nonatomic, readonly) double thumbnailWidth;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *version;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (double)cacheAgeWithValue:(id)arg1 withType:(int)arg2;
- (id)objectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
