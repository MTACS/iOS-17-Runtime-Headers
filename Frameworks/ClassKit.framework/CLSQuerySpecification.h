
@interface CLSQuerySpecification : NSObject <NSSecureCoding> {
    NSString * _entityName;
    unsigned long long  _limit;
    unsigned long long  _observerOptions;
    unsigned long long  _offset;
    NSPredicate * _predicate;
    NSArray * _sortDescriptors;
}

@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long observerOptions;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (id)querySpecificationWithObjectName:(id)arg1 predicate:(id)arg2;
+ (id)querySpecificationWithObjectType:(Class)arg1 predicate:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectName:(id)arg1 predicate:(id)arg2;
- (id)initWithObjectType:(Class)arg1 predicate:(id)arg2;
- (unsigned long long)limit;
- (unsigned long long)observerOptions;
- (unsigned long long)offset;
- (id)predicate;
- (void)setLimit:(unsigned long long)arg1;
- (void)setObserverOptions:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
