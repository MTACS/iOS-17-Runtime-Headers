
@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding> {
    bool  _byCopy;
    unsigned long long  _lastUsedDatePolicy;
    NSArray * _rootFilenames;
    bool  _shouldBounce;
    FPActionOperationLocator * _targetFolder;
}

@property (nonatomic) bool byCopy;
@property (nonatomic, readonly) bool byMoving;
@property (nonatomic) unsigned long long lastUsedDatePolicy;
@property (nonatomic, retain) NSArray *rootFilenames;
@property (nonatomic) bool shouldBounce;
@property (nonatomic, retain) FPActionOperationLocator *targetFolder;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)byCopy;
- (bool)byMoving;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationID:(id)arg1 roots:(id)arg2 rootFilenames:(id)arg3 targetFolder:(id)arg4 lastUsedDatePolicy:(unsigned long long)arg5 bounce:(bool)arg6 byCopy:(bool)arg7;
- (unsigned long long)lastUsedDatePolicy;
- (id)rootFilenames;
- (void)setByCopy:(bool)arg1;
- (void)setLastUsedDatePolicy:(unsigned long long)arg1;
- (void)setRootFilenames:(id)arg1;
- (void)setShouldBounce:(bool)arg1;
- (void)setTargetFolder:(id)arg1;
- (bool)shouldBounce;
- (id)targetFolder;

@end
