
@interface BMIntelligencePlatformMessageTerms : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    NSString * _domain;
    bool  _hasProtoVersion;
    bool  _hasRaw_timestamp;
    int  _protoVersion;
    double  _raw_timestamp;
    NSArray * _recipients;
    NSString * _sender;
    NSString * _spotlightIdentifier;
    NSArray * _termCount;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool hasProtoVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int protoVersion;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *spotlightIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *termCount;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_recipientsJSONArray;
- (id)_termCountJSONArray;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)domain;
- (bool)hasProtoVersion;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithProtoVersion:(id)arg1 bundleID:(id)arg2 domain:(id)arg3 spotlightIdentifier:(id)arg4 timestamp:(id)arg5 sender:(id)arg6 recipients:(id)arg7 termCount:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)protoVersion;
- (id)recipients;
- (id)sender;
- (id)serialize;
- (void)setHasProtoVersion:(bool)arg1;
- (id)spotlightIdentifier;
- (id)termCount;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
