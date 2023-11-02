
@interface BLPurchaseRequest : BLRequest <NSCopying, NSSecureCoding> {
    NSNumber * _accountIdentifier;
    NSDictionary * _analyticsInfo;
    bool  _audiobook;
    NSString * _buyParameters;
    NSString * _logUUID;
    NSURL * _permlink;
    NSString * _permlinkTitle;
    bool  _preOrder;
    NSString * _presentingSceneIdentifier;
    bool  _restore;
    NSNumber * _storeIdentifier;
    NSSet * _storeIdentifiersToDownload;
    bool  _supplementalContent;
    bool  _suppressNetworkEvaluatorDialogs;
    bool  _userInitiated;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, retain) NSDictionary *analyticsInfo;
@property (getter=isAudiobook, nonatomic) bool audiobook;
@property (nonatomic, copy) NSString *buyParameters;
@property (nonatomic, copy) NSString *logUUID;
@property (nonatomic, retain) NSURL *permlink;
@property (nonatomic, copy) NSString *permlinkTitle;
@property (getter=isPreOrder, nonatomic) bool preOrder;
@property (nonatomic, retain) NSString *presentingSceneIdentifier;
@property (getter=isRestore, nonatomic) bool restore;
@property (nonatomic, retain) NSNumber *storeIdentifier;
@property (nonatomic, retain) NSSet *storeIdentifiersToDownload;
@property (getter=isSupplementalContent, nonatomic) bool supplementalContent;
@property (getter=shouldSuppressNetworkEvaluatorDialogs, nonatomic) bool suppressNetworkEvaluatorDialogs;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

+ (id)requestWithBuyParameters:(id)arg1 storeIdentifier:(id)arg2;
+ (id)requestWithPermlink:(id)arg1 title:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)analyticsInfo;
- (id)buyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAudiobook;
- (bool)isPreOrder;
- (bool)isRestore;
- (bool)isSupplementalContent;
- (bool)isUserInitiated;
- (id)logUUID;
- (id)permlink;
- (id)permlinkTitle;
- (id)presentingSceneIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAnalyticsInfo:(id)arg1;
- (void)setAudiobook:(bool)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setPermlink:(id)arg1;
- (void)setPermlinkTitle:(id)arg1;
- (void)setPreOrder:(bool)arg1;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (void)setRestore:(bool)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStoreIdentifiersToDownload:(id)arg1;
- (void)setSupplementalContent:(bool)arg1;
- (void)setSuppressNetworkEvaluatorDialogs:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)shouldSuppressNetworkEvaluatorDialogs;
- (id)storeIdentifier;
- (id)storeIdentifiersToDownload;

@end
