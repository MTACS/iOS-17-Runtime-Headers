
@interface SUCoreSimulateEvent : NSObject <NSSecureCoding> {
    NSString * _alteration;
    NSString * _assetAttributesPlist;
    NSArray * _assetBuildVersions;
    NSArray * _assetProductVersions;
    NSString * _assetState;
    int  _count;
    int  _duration;
    int  _endAt;
    long long  _errorCode;
    NSString * _errorDomain;
    long long  _errorRecoverable;
    NSString * _fsmEvent;
    NSString * _fsmState;
    NSString * _identityName;
    NSString * _moduleName;
    long long  _simAction;
    long long  _simTrigger;
    int  _startAt;
    NSString * _untilStop;
    NSString * _updateInfoPlist;
}

@property (nonatomic, readonly, retain) NSString *alteration;
@property (nonatomic, readonly, retain) NSString *assetAttributesPlist;
@property (nonatomic, readonly, retain) NSArray *assetBuildVersions;
@property (nonatomic, readonly, retain) NSArray *assetProductVersions;
@property (nonatomic, readonly, retain) NSString *assetState;
@property (nonatomic) int count;
@property (nonatomic, readonly) int duration;
@property (nonatomic, readonly) int endAt;
@property (nonatomic, readonly) long long errorCode;
@property (nonatomic, readonly, retain) NSString *errorDomain;
@property (nonatomic, readonly) long long errorRecoverable;
@property (nonatomic, readonly, retain) NSString *fsmEvent;
@property (nonatomic, readonly, retain) NSString *fsmState;
@property (nonatomic, readonly, retain) NSString *identityName;
@property (nonatomic, readonly, retain) NSString *moduleName;
@property (nonatomic, readonly) long long simAction;
@property (nonatomic, readonly) long long simTrigger;
@property (nonatomic, readonly) int startAt;
@property (nonatomic, readonly, retain) NSString *untilStop;
@property (nonatomic, readonly, retain) NSString *updateInfoPlist;

+ (id)nameForSimulateEventBoolean:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_actionName;
- (id)_descriptionFSM;
- (id)_descriptionStandard;
- (id)_initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atIdentity:(id)arg4 atEvent:(id)arg5 inState:(id)arg6 alteration:(id)arg7 startAt:(int)arg8 endAt:(int)arg9 duration:(int)arg10 untilStop:(id)arg11 assetBuildVersions:(id)arg12 assetProductVersions:(id)arg13 assetAttributesPlist:(id)arg14 assetState:(id)arg15 updateInfoPlist:(id)arg16 errorDomain:(id)arg17 errorCode:(long long)arg18 errorRecoverable:(long long)arg19;
- (id)_triggerName;
- (id)alteration;
- (id)assetAttributesPlist;
- (id)assetBuildVersions;
- (id)assetProductVersions;
- (id)assetState;
- (id)buildErrorWithDescription:(id)arg1;
- (int)count;
- (id)description;
- (int)duration;
- (void)encodeWithCoder:(id)arg1;
- (int)endAt;
- (long long)errorCode;
- (id)errorDomain;
- (long long)errorRecoverable;
- (id)fsmEvent;
- (id)fsmState;
- (id)identityName;
- (id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forMachine:(id)arg3 atEvent:(id)arg4 inState:(id)arg5 alteration:(id)arg6 startAt:(int)arg7 endAt:(int)arg8 assetBuildVersions:(id)arg9 assetProductVersions:(id)arg10 assetAttributesPlist:(id)arg11 assetState:(id)arg12 updateInfoPlist:(id)arg13 errorDomain:(id)arg14 errorCode:(long long)arg15 errorRecoverable:(long long)arg16;
- (id)initWithAction:(long long)arg1 onTrigger:(long long)arg2 forModule:(id)arg3 atFunction:(id)arg4 startAt:(int)arg5 endAt:(int)arg6 duration:(int)arg7 untilStop:(id)arg8 assetBuildVersions:(id)arg9 assetProductVersions:(id)arg10 assetAttributesPlist:(id)arg11 assetState:(id)arg12 updateInfoPlist:(id)arg13 errorDomain:(id)arg14 errorCode:(long long)arg15 errorRecoverable:(long long)arg16;
- (id)initWithCoder:(id)arg1;
- (id)moduleName;
- (void)setCount:(int)arg1;
- (long long)simAction;
- (long long)simTrigger;
- (int)startAt;
- (id)summary;
- (id)untilStop;
- (id)updateInfoPlist;

@end
