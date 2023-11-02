
@interface NSConstraintCache : NSObject {
    NSMutableArray * _children;
    NSArray * _constraint;
    NSEntityDescription * _entity;
    NSArray * _extension;
    NSMutableDictionary * _knownValues;
}

- (void)dealloc;
- (id)description;

@end
