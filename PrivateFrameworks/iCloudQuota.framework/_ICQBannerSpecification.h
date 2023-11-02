
@interface _ICQBannerSpecification : NSObject {
    ICQLink * _dismissLink;
    NSDictionary * _iconDetails;
    bool  _isDetailBannerInfoAvailable;
    NSArray * _links;
    NSString * _linksFormat;
    NSDictionary * _messageTemplates;
    bool  _placeholderExists;
    NSDictionary * _serverDict;
    NSURL * _serverUIURL;
    NSDictionary * _titleTemplates;
}

@property (nonatomic, retain) ICQLink *dismissLink;
@property (nonatomic, readonly) NSURL *dynamicUIRouteURL;
@property (nonatomic, readonly) NSDictionary *iconDetails;
@property (nonatomic, readonly) bool isDetailBannerInfoAvailable;
@property (nonatomic, retain) NSArray *links;
@property (nonatomic, retain) NSString *linksFormat;
@property (nonatomic, readonly) NSDictionary *messageTemplates;
@property (nonatomic, readonly) bool placeholderExists;
@property (nonatomic, readonly) NSString *purchaseAttribution;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, retain) NSURL *serverUIURL;
@property (nonatomic, readonly) NSDictionary *titleTemplates;

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;

- (void).cxx_destruct;
- (id)_bannerSpecificationParams;
- (id)dismissLink;
- (id)dynamicUIRouteURL;
- (id)iconDetails;
- (id)iconPath;
- (id)initWithDetailBannerInfo:(id)arg1;
- (id)initWithServerDictionary:(id)arg1;
- (bool)isDetailBannerInfoAvailable;
- (id)links;
- (id)linksFormat;
- (id)messageTemplates;
- (id)messageWithKey:(id)arg1;
- (bool)placeholderExists;
- (id)purchaseAttribution;
- (id)reason;
- (id)serverUIURL;
- (void)setDismissLink:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setLinksFormat:(id)arg1;
- (void)setMessageWithServerMessage:(id)arg1;
- (void)setServerUIURL:(id)arg1;
- (id)titleTemplates;
- (id)titleWithKey:(id)arg1;

@end
