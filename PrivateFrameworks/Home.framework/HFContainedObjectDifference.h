
@interface HFContainedObjectDifference : HFDifference {
    HFComparisonResult * _containedObjectResult;
}

@property (nonatomic, retain) HFComparisonResult *containedObjectResult;

+ (id)containedObjectDifferenceWithKey:(id)arg1 comparisonResult:(id)arg2;

- (void).cxx_destruct;
- (id)containedObjectResult;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilder;
- (void)setContainedObjectResult:(id)arg1;

@end
