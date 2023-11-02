
@interface BMAdPlatformsDiscardReasons : BMEventBase <BMStoreData> {
    unsigned long long  _brandIdentifier;
    NSString * _bundleID;
    int  _discardReason;
    int  _displayOrder;
    bool  _hasBrandIdentifier;
    bool  _hasDisplayOrder;
    int  _placement;
    NSString * _searchTerms;
}

@property (nonatomic, readonly) unsigned long long brandIdentifier;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int discardReason;
@property (nonatomic, readonly) int displayOrder;
@property (nonatomic) bool hasBrandIdentifier;
@property (nonatomic) bool hasDisplayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int placement;
@property (nonatomic, readonly) NSString *searchTerms;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned long long)brandIdentifier;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (int)discardReason;
- (int)displayOrder;
- (bool)hasBrandIdentifier;
- (bool)hasDisplayOrder;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDiscardReason:(int)arg1 placement:(int)arg2 bundleID:(id)arg3 brandIdentifier:(id)arg4 displayOrder:(id)arg5 searchTerms:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)placement;
- (id)searchTerms;
- (id)serialize;
- (void)setHasBrandIdentifier:(bool)arg1;
- (void)setHasDisplayOrder:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
