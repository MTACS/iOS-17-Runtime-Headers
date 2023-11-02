
@interface PGGraphUpdateManagerTargetTokenState : NSObject {
    PHPersistentChangeToken * _changeToken;
    bool  _encounteredTargetToken;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;
@property (nonatomic) bool encounteredTargetToken;

- (void).cxx_destruct;
- (id)changeToken;
- (id)description;
- (bool)encounteredTargetToken;
- (id)initWithPersistentChangeToken:(id)arg1;
- (void)setEncounteredTargetToken:(bool)arg1;

@end
