
@interface CSUTaxonomy : NSObject {
    bool  _hasLabelAttributes;
    NSMutableDictionary * _labels;
    NSString * _name;
    struct shared_ptr<csu::BaseTaxonomy> { 
        struct BaseTaxonomy {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taxonomy;
    NSString * _version;
    NSArray * _vocabularies;
}

@property (nonatomic, readonly) bool hasLabelAttributes;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy {} *x1; struct __shared_weak_count {} *x2; } taxonomy;
@property (nonatomic, readonly, copy) NSString *version;
@property (nonatomic, readonly, copy) NSArray *vocabularyNames;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attributesForLabel:(id)arg1;
- (unsigned long long)countLabelsInVocabularyNamed:(id)arg1;
- (void)enumerateLabelsInTaxonomyUsingBlock:(id /* block */)arg1;
- (void)enumerateLabelsInVocabularyNamed:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasLabelAttributes;
- (bool)hasVocabularyNamed:(id)arg1;
- (id)initWithTaxonomy:(struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithTaxonomy:(struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy {} *x1; struct __shared_weak_count {} *x2; })arg1 taxonomyHasLabelAttributes:(bool)arg2;
- (id)labelsInVocabularyNamed:(id)arg1;
- (id)name;
- (struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy {} *x1; struct __shared_weak_count {} *x2; })taxonomy;
- (id)version;
- (id)vocabularyNames;

@end
