
@interface GEOMapSubscriptionAddRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _dataTypes;
    NSString * _displayName;
    NSDate * _expirationDate;
    NSString * _identifier;
    unsigned long long  _policy;
    GEOMapRegion * _region;
}

@property (nonatomic) unsigned long long dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long policy;
@property (nonatomic, retain) GEOMapRegion *region;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (unsigned long long)dataTypes;
- (id)displayName;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)expirationDate;
- (id)identifier;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)policy;
- (id)region;
- (unsigned long long)reply;
- (void)setDataTypes:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPolicy:(unsigned long long)arg1;
- (void)setRegion:(id)arg1;

@end
