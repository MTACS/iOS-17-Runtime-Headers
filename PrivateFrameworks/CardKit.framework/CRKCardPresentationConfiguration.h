
@interface CRKCardPresentationConfiguration : NSObject {
    CRSCardRequest * _cardRequest;
    bool  _loadsBundleProviders;
    bool  _respectsUserConsent;
}

@property (nonatomic, readonly) CRSCardRequest *cardRequest;
@property (nonatomic, readonly) <CRContent> *content;
@property (nonatomic) bool loadsBundleProviders;
@property (nonatomic) bool respectsUserConsent;

- (void).cxx_destruct;
- (id)cardRequest;
- (id)content;
- (id)initWithCard:(id)arg1;
- (id)initWithCardRequest:(id)arg1;
- (id)initWithContent:(id)arg1;
- (bool)loadsBundleProviders;
- (bool)respectsUserConsent;
- (void)setLoadsBundleProviders:(bool)arg1;
- (void)setRespectsUserConsent:(bool)arg1;

@end
