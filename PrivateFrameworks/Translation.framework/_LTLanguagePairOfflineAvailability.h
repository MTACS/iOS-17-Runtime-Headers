
@interface _LTLanguagePairOfflineAvailability : NSObject <NSSecureCoding> {
    NSString * _mtState;
    bool  _needsUpdate;
    _LTLocalePair * _pair;
    long long  _pairState;
    NSString * _sourceASRState;
    NSString * _sourceTTSState;
    NSString * _targetASRState;
    NSString * _targetTTSState;
}

@property (nonatomic, retain) NSString *mtState;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) _LTLocalePair *pair;
@property (nonatomic) long long pairState;
@property (nonatomic, retain) NSString *sourceASRState;
@property (nonatomic, retain) NSString *sourceTTSState;
@property (nonatomic, retain) NSString *targetASRState;
@property (nonatomic, retain) NSString *targetTTSState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocales:(id)arg1;
- (id)mtState;
- (bool)needsUpdate;
- (id)pair;
- (long long)pairState;
- (void)setMtState:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setPair:(id)arg1;
- (void)setPairState:(long long)arg1;
- (void)setSourceASRState:(id)arg1;
- (void)setSourceTTSState:(id)arg1;
- (void)setTargetASRState:(id)arg1;
- (void)setTargetTTSState:(id)arg1;
- (id)sourceASRState;
- (id)sourceTTSState;
- (id)targetASRState;
- (id)targetTTSState;

@end
