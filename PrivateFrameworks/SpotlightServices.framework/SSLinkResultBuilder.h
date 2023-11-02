
@interface SSLinkResultBuilder : SSResultBuilder {
    NSArray * _senderContactIdentifiers;
    NSArray * _senders;
    unsigned long long  _syndicationStatus;
    NSURL * _url;
    NSString * _websiteTitle;
}

@property (nonatomic, retain) NSArray *senderContactIdentifiers;
@property (nonatomic, retain) NSArray *senders;
@property (nonatomic) unsigned long long syndicationStatus;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSString *websiteTitle;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)initWithResult:(id)arg1;
- (id)senderContactIdentifiers;
- (id)senders;
- (void)setSenderContactIdentifiers:(id)arg1;
- (void)setSenders:(id)arg1;
- (void)setSyndicationStatus:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setWebsiteTitle:(id)arg1;
- (id)subclassBuildHorizontallyScrollingCardSection;
- (unsigned long long)syndicationStatus;
- (id)url;
- (id)websiteTitle;

@end
