
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {
    bool  _didBeginOutput;
}

@property (nonatomic) bool didBeginOutput;
@property (nonatomic) long long positionOffset;

+ (id)outputWithKeyboardOutput:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)didBeginOutput;
- (bool)isEqual:(id)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setDidBeginOutput:(bool)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setTextToCommit:(id)arg1;

@end
