
@interface BMDiscoverabilityUsage : BMEventBase <BMStoreData> {
    NSData * _analyticsEvent;
    NSString * _bundleID;
    NSString * _contentIdentifier;
    int  _contentType;
    NSString * _context;
    NSData * _eligibleContext;
    int  _ineligibleReason;
    NSString * _osBuild;
    int  _state;
}

@property (nonatomic, readonly) NSData *analyticsEvent;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) int contentType;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *eligibleContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int ineligibleReason;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)analyticsEvent;
- (id)bundleID;
- (id)contentIdentifier;
- (int)contentType;
- (id)context;
- (unsigned int)dataVersion;
- (id)description;
- (id)eligibleContext;
- (int)ineligibleReason;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContentIdentifier:(id)arg1 bundleID:(id)arg2 contentType:(int)arg3 context:(id)arg4 eligibleContext:(id)arg5 ineligibleReason:(int)arg6 osBuild:(id)arg7 state:(int)arg8 analyticsEvent:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)osBuild;
- (id)serialize;
- (int)state;
- (void)writeTo:(id)arg1;

@end
