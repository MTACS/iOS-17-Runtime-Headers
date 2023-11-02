
@interface DNDDiffBuilder : NSObject {
    NSMutableArray * _children;
    NSString * _description;
    id  _object1;
    id  _object2;
}

@property (nonatomic, readonly, copy) NSArray *children;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDifferences;
@property (nonatomic, readonly) id object1;
@property (nonatomic, readonly) id object2;

- (void).cxx_destruct;
- (id)children;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (void)diffObject:(id)arg1 againstObject:(id)arg2;
- (void)diffObject:(id)arg1 againstObject:(id)arg2 withDescription:(id)arg3;
- (bool)hasDifferences;
- (id)init;
- (void)log:(id)arg1 withPrefix:(id)arg2;
- (id)object1;
- (id)object2;

@end
