
@interface IPAGeometryOperatorSequence : IPAGeometryOperator {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _operators;
    NSMutableDictionary * map_identifierToIndex;
    NSMutableDictionary * map_identifierToOperator;
}

+ (id)sequence;
+ (id)sequenceWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)appendOperator:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (bool)removeOperatorWithIdentifier:(id)arg1;
- (bool)replaceOperatorWithIdentifier:(id)arg1 withOperator:(id)arg2;
- (id)subsequenceFrom:(id)arg1 to:(id)arg2;
- (id)transformForGeometry:(id)arg1;

@end
