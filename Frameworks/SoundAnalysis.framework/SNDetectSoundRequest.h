
@interface SNDetectSoundRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    SNDetectorVariant * _detectorVariant;
    MLModelConfiguration * _modelConfiguration;
    NSPredicate * _resultsPredicate;
    long long  _resultsPredicateLeakCount;
    NSString * _soundIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLModelConfiguration *modelConfiguration;
@property (nonatomic, copy) NSPredicate *resultsPredicate;
@property (nonatomic) long long resultsPredicateLeakCount;
@property (nonatomic, readonly) NSString *soundIdentifier;
@property (readonly) Class superclass;

+ (id)allValidDetectorIdentifiers;
+ (id)allValidSoundIdentifiers;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectorIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithDetectorVariant:(id)arg1 soundIdentifier:(id)arg2 modelConfiguration:(id)arg3 resultsPredicate:(id)arg4 resultsPredicateLeakCount:(long long)arg5;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (id)initWithSoundIdentifier:(id)arg1;
- (id)initWithSoundIdentifier:(id)arg1 shouldUseTwoPassDetection:(bool)arg2;
- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modelConfiguration;
- (id)resultsPredicate;
- (long long)resultsPredicateLeakCount;
- (void)setModelConfiguration:(id)arg1;
- (void)setResultsPredicate:(id)arg1;
- (bool)setResultsPredicate:(id)arg1 error:(id*)arg2;
- (void)setResultsPredicateLeakCount:(long long)arg1;
- (id)soundIdentifier;

@end
