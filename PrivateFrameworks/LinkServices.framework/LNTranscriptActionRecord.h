
@interface LNTranscriptActionRecord : NSObject <BMStoreData, NSSecureCoding> {
    LNAction * _action;
    NSData * _actionData;
    LNActionOutput * _actionOutput;
    NSData * _actionOutputData;
    NSString * _bundleIdentifier;
    NSString * _clientLabel;
    NSDate * _executionDate;
    NSUUID * _executionUUID;
    NSArray * _predictions;
    NSData * _predictionsData;
    LNAction * _resolvedAction;
    NSData * _resolvedActionData;
    unsigned short  _source;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) NSData *actionData;
@property (nonatomic, readonly, copy) LNActionOutput *actionOutput;
@property (nonatomic, readonly, copy) NSData *actionOutputData;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientLabel;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *executionDate;
@property (nonatomic, readonly, copy) NSUUID *executionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *predictions;
@property (nonatomic, readonly, copy) NSData *predictionsData;
@property (nonatomic, readonly, copy) LNAction *resolvedAction;
@property (nonatomic, readonly, copy) NSData *resolvedActionData;
@property (nonatomic) unsigned short source;
@property (readonly) Class superclass;

+ (unsigned int)datastoreVersion;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionData;
- (id)actionOutput;
- (id)actionOutputData;
- (id)bundleIdentifier;
- (id)clientLabel;
- (unsigned int)dataVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)executionDate;
- (id)executionUUID;
- (unsigned long long)hash;
- (id)initWithAction:(id)arg1 resolvedAction:(id)arg2 bundleIdentifier:(id)arg3 actionOutput:(id)arg4 executionUUID:(id)arg5 source:(unsigned short)arg6 executionDate:(id)arg7 clientLabel:(id)arg8 predictions:(id)arg9;
- (id)initWithBundleIdentifier:(id)arg1 source:(unsigned short)arg2 clientLabel:(id)arg3 executionUUID:(id)arg4 executionDate:(id)arg5 action:(id)arg6 resolvedAction:(id)arg7 actionOutput:(id)arg8 predictions:(id)arg9;
- (id)initWithBundleIdentifier:(id)arg1 source:(unsigned short)arg2 clientLabel:(id)arg3 executionUUID:(id)arg4 executionDate:(id)arg5 actionData:(id)arg6 resolvedActionData:(id)arg7 actionOutputData:(id)arg8 predictionsData:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predictions;
- (id)predictionsData;
- (id)resolvedAction;
- (id)resolvedActionData;
- (id)serialize;
- (void)setBundleIdentifier:(id)arg1;
- (void)setSource:(unsigned short)arg1;
- (unsigned short)source;
- (id)verboseDescription;

@end
