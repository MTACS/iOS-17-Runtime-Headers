
@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying> {
    long long  _LPEMOption;
    <NSCopying> * _localContext;
    NSString * _reason;
    long long  _rebootType;
    long long  _source;
}

@property (nonatomic) long long LPEMOption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReboot;
@property (nonatomic, readonly) bool isShutdown;
@property (nonatomic, readonly) bool isUserInitiated;
@property (nonatomic) <NSCopying> *localContext;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic) long long rebootType;
@property (nonatomic) long long source;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)LPEMOption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isReboot;
- (bool)isShutdown;
- (bool)isUserInitiated;
- (id)localContext;
- (id)reason;
- (long long)rebootType;
- (void)setLPEMOption:(long long)arg1;
- (void)setLocalContext:(id)arg1;
- (void)setRebootType:(long long)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
