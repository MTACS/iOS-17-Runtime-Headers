
@interface SXFeedNavigationAppearance : SXJSONObject

@property (nonatomic, readonly) NSString *compactTitle;
@property (nonatomic, readonly) NSString *icon1xImageIdentifier;
@property (nonatomic, readonly) NSString *icon2xImageIdentifier;
@property (nonatomic, readonly) NSString *icon3xImageIdentifier;
@property (nonatomic, readonly) NSString *iconImageIdentifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *subtitleColor;

- (id)iconImageIdentifier;

@end
