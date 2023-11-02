
@interface CADPredicate : NSPredicate <NSSecureCoding>

@property (nonatomic, readonly) <NSFastEnumeration> *databasesToQuery;
@property (nonatomic, readonly) NSArray *defaultPropertiesToLoad;
@property (nonatomic, readonly) NSDictionary *relatedObjectPropertiesToLoad;

+ (void)setValidator:(Class)arg1;

- (void)beginSignpostWithHandle:(id)arg1 signpostID:(unsigned long long)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { }*)arg1;
- (id)databasesToQuery;
- (id)defaultPropertiesToLoad;
- (bool)evaluateWithObject:(id)arg1;
- (id)relatedObjectPropertiesToLoad;

@end
