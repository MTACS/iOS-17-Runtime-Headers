
@interface MUVendorLinkViewModel : NSObject {
    NSString * _actionName;
    NSString * _appAdamId;
    NSString * _appShortName;
    NSURL * _artworkURL;
    int  _linkType;
    NSString * _linkTypeString;
    NSString * _providerName;
}

@property (nonatomic, copy) NSString *actionName;
@property (nonatomic, copy) NSString *appAdamId;
@property (nonatomic, copy) NSString *appShortName;
@property (nonatomic, retain) NSURL *artworkURL;
@property (nonatomic) int linkType;
@property (nonatomic, copy) NSString *linkTypeString;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)actionName;
- (id)appAdamId;
- (id)appShortName;
- (id)artworkURL;
- (id)description;
- (int)linkType;
- (id)linkTypeString;
- (id)providerName;
- (void)setActionName:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setAppShortName:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setLinkType:(int)arg1;
- (void)setLinkTypeString:(id)arg1;
- (void)setProviderName:(id)arg1;
- (id)uniqueIdentifier;

@end
