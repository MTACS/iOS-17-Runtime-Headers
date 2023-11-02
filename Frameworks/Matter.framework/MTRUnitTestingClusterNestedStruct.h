
@interface MTRUnitTestingClusterNestedStruct : NSObject <NSCopying> {
    NSNumber * _a;
    NSNumber * _b;
    MTRUnitTestingClusterSimpleStruct * _c;
}

@property (nonatomic, copy) NSNumber *a;
@property (nonatomic, copy) NSNumber *b;
@property (nonatomic, copy) MTRUnitTestingClusterSimpleStruct *c;

- (void).cxx_destruct;
- (id)a;
- (id)b;
- (id)c;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setA:(id)arg1;
- (void)setB:(id)arg1;
- (void)setC:(id)arg1;

@end
