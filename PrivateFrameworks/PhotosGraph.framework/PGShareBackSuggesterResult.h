
@interface PGShareBackSuggesterResult : NSObject {
    NSSet * _momentNodes;
    unsigned short  _processingValue;
    NSArray * _suggesterInputs;
}

@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) unsigned short processingValue;
@property (nonatomic, readonly) NSArray *suggesterInputs;

+ (id)momentNodesForSuggesterResults:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInputs:(id)arg1 processingValue:(unsigned short)arg2 momentNodes:(id)arg3;
- (id)momentNodes;
- (unsigned short)processingValue;
- (id)suggesterInputs;

@end
