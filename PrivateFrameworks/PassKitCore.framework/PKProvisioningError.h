
@interface PKProvisioningError : NSError <NSSecureCoding> {
    bool  _hasLocalizedTitleAndMessage;
    NSMutableArray * _internalDebugDescriptions;
    unsigned long long  _severity;
    NSError * _underlyingError;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, readonly) NSError *displayableError;
@property (nonatomic) bool hasLocalizedTitleAndMessage;
@property (nonatomic, retain) NSString *localizedMessage;
@property (nonatomic, retain) NSString *localizedRecoveryDescription;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) NSURL *recoveryUrl;
@property (nonatomic, readonly) unsigned long long severity;
@property (nonatomic, retain) NSError *underlyingError;

+ (id)errorWithCommonType:(unsigned long long)arg1 severity:(unsigned long long)arg2;
+ (id)errorWithSeverity:(unsigned long long)arg1;
+ (id)errorWithTitle:(id)arg1 message:(id)arg2 severity:(unsigned long long)arg3;
+ (id)errorWithTitleKey:(id)arg1 messageKey:(id)arg2 severity:(unsigned long long)arg3;
+ (id)errorWithUnderlyingError:(id)arg1 defaultSeverity:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;
+ (id)userCancelError;

- (void).cxx_destruct;
- (id)_initWithSeverity:(unsigned long long)arg1 localizedTitle:(id)arg2 localizedMessage:(id)arg3;
- (id)_initWithSeverity:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)addInternalDebugDescription:(id)arg1;
- (id)description;
- (id)displayableError;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocalizedTitleAndMessage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)localizedMessage;
- (id)localizedRecoveryDescription;
- (id)localizedTitle;
- (id)recoveryUrl;
- (void)setHasLocalizedTitleAndMessage:(bool)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedRecoveryDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setRecoveryUrl:(id)arg1;
- (void)setUnderlyingError:(id)arg1;
- (unsigned long long)severity;
- (id)underlyingError;
- (id)userInfo;

@end
