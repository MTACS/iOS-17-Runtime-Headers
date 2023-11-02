
@interface AMSMarketingItem : NSObject {
    NSDictionary * _rawValues;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) NSDictionary *artworkDictionary;
@property (nonatomic, readonly) NSString *badge;
@property (nonatomic, readonly) NSString *campaignID;
@property (nonatomic, readonly) NSArray *itemActions;
@property (nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly, copy) NSDictionary *rawValues;
@property (nonatomic, readonly) NSArray *relatedContent;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *templateID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *videos;

- (void).cxx_destruct;
- (id)URLString;
- (id)abSettings;
- (id)artworkDictionary;
- (id)badge;
- (id)campaignID;
- (id)endDate;
- (id)initWithDictionary:(id)arg1;
- (id)itemActions;
- (id)itemID;
- (id)rawValues;
- (id)relatedContent;
- (id)renderingAttributes;
- (id)serviceType;
- (id)subtitle;
- (id)tagline;
- (id)templateID;
- (id)title;
- (id)type;
- (id)video;
- (id)videos;

@end
