
@interface CACRecordedUserAction : NSObject <NSSecureCoding> {
    bool  _canIgnoreFailure;
    NSString * _identifier;
    id  _object;
    CACRecordedUserActionFlow * _ownerFlow;
    NSDictionary * _targetAttributes;
    long long  _type;
}

@property (readonly) bool canIgnoreFailure;
@property (readonly) bool isReplayableGesture;
@property (readonly) bool isSpokenCommand;
@property CACRecordedUserActionFlow *ownerFlow;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_derivedTargetAttributesFromSpokenCommand:(id)arg1;
- (id)_dictionaryFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_labeledElementsFromMatchingCriteria:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectFromDictionary:(id)arg1;
- (void)beginExecutingWithCompletionBlock:(id /* block */)arg1;
- (bool)canIgnoreFailure;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpokenCommand:(id)arg1;
- (bool)isReplayableGesture;
- (bool)isSpokenCommand;
- (id)ownerFlow;
- (id)plistDescription;
- (void)setOwnerFlow:(id)arg1;
- (id)spokenCommand;

@end
