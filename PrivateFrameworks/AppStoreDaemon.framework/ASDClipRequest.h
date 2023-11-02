
@interface ASDClipRequest : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
    NSString * _installSourceBundleID;
    NSData * _placeholderArtwork;
    bool  _prefetchDecryption;
    NSString * _referrerType;
    NSURL * _sourceURL;
    bool  _thirdPartyWithNoAppReferrer;
    NSUUID * _uniqueID;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *installSourceBundleID;
@property (nonatomic, retain) NSData *placeholderArtwork;
@property (nonatomic) bool prefetchDecryption;
@property (nonatomic, retain) NSString *referrerType;
@property (nonatomic, retain) NSURL *sourceURL;
@property (nonatomic) bool thirdPartyWithNoAppReferrer;
@property (nonatomic, readonly) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installSourceBundleID;
- (id)placeholderArtwork;
- (bool)prefetchDecryption;
- (id)referrerType;
- (void)setInstallSourceBundleID:(id)arg1;
- (void)setPlaceholderArtwork:(id)arg1;
- (void)setPrefetchDecryption:(bool)arg1;
- (void)setReferrerType:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setThirdPartyWithNoAppReferrer:(bool)arg1;
- (id)sourceURL;
- (bool)thirdPartyWithNoAppReferrer;
- (id)uniqueID;

@end
