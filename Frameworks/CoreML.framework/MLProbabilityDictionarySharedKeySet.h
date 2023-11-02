
@interface MLProbabilityDictionarySharedKeySet : NSObject {
    NSDictionary * _labelToIndex;
    NSArray * _labels;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSEnumerator *labelEnumerator;
@property (nonatomic, readonly) unsigned long long uniqueLabelCount;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)indexOfLabel:(id)arg1;
- (id)initWithLabels:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)labelEnumerator;
- (unsigned long long)uniqueLabelCount;

@end
