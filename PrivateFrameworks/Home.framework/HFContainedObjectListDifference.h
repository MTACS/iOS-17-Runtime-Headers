
@interface HFContainedObjectListDifference : HFDifference {
    NSArray * _containedObjectResults;
    NSNumber * _isASubsetOfBValue;
    NSNumber * _isBSubsetOfAValue;
}

@property (nonatomic, retain) NSArray *containedObjectResults;
@property (nonatomic, readonly) bool isASubsetOfB;
@property (nonatomic, retain) NSNumber *isASubsetOfBValue;
@property (nonatomic, readonly) bool isBSubsetOfA;
@property (nonatomic, retain) NSNumber *isBSubsetOfAValue;

+ (id)containedObjectDifferenceWithKey:(id)arg1 objectsA:(id)arg2 objectsB:(id)arg3;
+ (id)containedObjectDifferenceWithKey:(id)arg1 objectsA:(id)arg2 objectsB:(id)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)containedObjectResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (bool)isASubsetOfB;
- (id)isASubsetOfBValue;
- (bool)isBSubsetOfA;
- (id)isBSubsetOfAValue;
- (id)reevaluateWithBlock:(id /* block */)arg1;
- (void)setContainedObjectResults:(id)arg1;
- (void)setIsASubsetOfBValue:(id)arg1;
- (void)setIsBSubsetOfAValue:(id)arg1;

@end
