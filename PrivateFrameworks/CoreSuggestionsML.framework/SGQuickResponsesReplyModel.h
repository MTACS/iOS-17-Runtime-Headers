
@interface SGQuickResponsesReplyModel : NSObject {
    unsigned long long  _category;
    bool  _dynamicLabel;
    double  _scoreWeight;
    NSArray * _selectedPseudocounts;
    unsigned long long  _semanticClassIndex;
    NSArray * _semanticClasses;
}

@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) bool dynamicLabel;
@property (nonatomic, readonly) double scoreWeight;
@property (nonatomic, readonly) NSArray *selectedPseudocounts;
@property (nonatomic, readonly) unsigned long long semanticClassIndex;
@property (nonatomic, readonly) NSArray *semanticClasses;

+ (id)semanticClassesForArray:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)category;
- (bool)dynamicLabel;
- (id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2;
- (double)scoreWeight;
- (id)selectedPseudocounts;
- (unsigned long long)semanticClassIndex;
- (id)semanticClasses;

@end
