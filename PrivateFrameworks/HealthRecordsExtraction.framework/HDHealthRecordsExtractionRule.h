
@interface HDHealthRecordsExtractionRule : NSObject {
    NSString * _keyPath;
    NSArray * _transforms;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly, copy) NSArray *transforms;

+ (id)extractionRuleWithDefinition:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)definitionBySubstitutingKeyPathWith:(id)arg1;
- (id)init;
- (id)initWithKeyPath:(id)arg1 transforms:(id)arg2;
- (id)keyPath;
- (id)transforms;

@end
