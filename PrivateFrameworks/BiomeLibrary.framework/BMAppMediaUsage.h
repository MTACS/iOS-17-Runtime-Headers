
@interface BMAppMediaUsage : BMEventBase <BMStoreData> {
    NSString * _URL;
    NSString * _bundleID;
    bool  _hasIsUsageTrusted;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasStarting;
    bool  _isUsageTrusted;
    NSString * _mediaURL;
    double  _raw_absoluteTimestamp;
    NSString * _safariProfileID;
    bool  _starting;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSString *URL;
@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsUsageTrusted;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUsageTrusted;
@property (nonatomic, readonly) NSString *mediaURL;
@property (nonatomic, readonly) NSString *safariProfileID;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)URL;
- (id)absoluteTimestamp;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsUsageTrusted;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 isUsageTrusted:(id)arg5 absoluteTimestamp:(id)arg6 safariProfileID:(id)arg7;
- (id)initWithStarting:(id)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 isUsageTrusted:(id)arg5 absoluteTimestamp:(id)arg6 safariProfileID:(id)arg7 uniqueID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isUsageTrusted;
- (id)jsonDictionary;
- (id)mediaURL;
- (id)safariProfileID;
- (id)serialize;
- (void)setHasIsUsageTrusted:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
