
@interface _CPPunchoutForFeedback : PBCodable <NSSecureCoding, _CPPunchoutForFeedback> {
    NSString * _bundleIdentifier;
    int  _knownBundleIdentifier;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
    unsigned long long  _whichBundleid;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, readonly) unsigned long long whichBundleid;

- (void).cxx_destruct;
- (void)addUrls:(id)arg1;
- (id)bundleIdentifier;
- (void)clearBundleid;
- (void)clearUrls;
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)knownBundleIdentifier;
- (id)label;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setKnownBundleIdentifier:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;
- (id)urlsAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (unsigned long long)whichBundleid;
- (void)writeTo:(id)arg1;

@end
