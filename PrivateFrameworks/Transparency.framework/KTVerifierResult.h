
@interface KTVerifierResult : NSObject <NSSecureCoding> {
    NSString * _application;
    bool  _everOptedIn;
    NSError * _failure;
    NSArray * _loggableDatas;
    bool  _optedIn;
    KTAccountPublicID * _publicID;
    bool  _recentlyOptedIn;
    bool  _staticAccountKeyEnforced;
    unsigned long long  _succeed;
    unsigned long long  _uiStatus;
    NSString * _uri;
}

@property (retain) NSString *application;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property bool everOptedIn;
@property (retain) NSError *failure;
@property (retain) NSArray *loggableDatas;
@property bool optedIn;
@property (retain) KTAccountPublicID *publicID;
@property bool recentlyOptedIn;
@property bool staticAccountKeyEnforced;
@property unsigned long long succeed;
@property unsigned long long uiStatus;
@property (retain) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (id)debugDescription;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (bool)everOptedIn;
- (id)failure;
- (id)initPendingForUri:(id)arg1 application:(id)arg2;
- (id)initUnavailableForUri:(id)arg1 application:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithUri:(id)arg1 application:(id)arg2;
- (id)initWithUri:(id)arg1 application:(id)arg2 failure:(id)arg3;
- (id)initWithUri:(id)arg1 application:(id)arg2 ktResult:(unsigned long long)arg3;
- (id)initWithUri:(id)arg1 application:(id)arg2 ktResult:(unsigned long long)arg3 failure:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)loggableDatas;
- (bool)optedIn;
- (id)publicID;
- (bool)recentlyOptedIn;
- (void)setApplication:(id)arg1;
- (void)setEverOptedIn:(bool)arg1;
- (void)setFailure:(id)arg1;
- (void)setLoggableDatas:(id)arg1;
- (void)setOptedIn:(bool)arg1;
- (void)setPublicID:(id)arg1;
- (void)setRecentlyOptedIn:(bool)arg1;
- (void)setStaticAccountKeyEnforced:(bool)arg1;
- (void)setSucceed:(unsigned long long)arg1;
- (void)setUiStatus:(unsigned long long)arg1;
- (void)setUri:(id)arg1;
- (bool)staticAccountKeyEnforced;
- (unsigned long long)succeed;
- (unsigned long long)uiStatus;
- (id)uri;

@end
