
@interface CHStrokeClassificationResult : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _nontextCandidates;
    NSDictionary * _scriptClassificationsByStrokeIdentifier;
    NSDictionary * _strokeClassificationsByStrokeIdentifier;
    NSDictionary * _substrokesByStrokeIdentifier;
    NSSet * _textStrokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSSet *nontextCandidates;
@property (nonatomic, readonly, copy) NSDictionary *scriptClassificationsByStrokeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *strokeClassificationsByStrokeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *substrokesByStrokeIdentifier;
@property (nonatomic, readonly, copy) NSSet *textStrokeIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)arg1 scriptClassificationsByStrokeIdentifier:(id)arg2 substrokesByStrokeIdentifier:(id)arg3 nontextCandidates:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToStrokeClassificationResult:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nontextCandidates;
- (id)scriptClassificationsByStrokeIdentifier;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (id)textStrokeIdentifiers;

@end
