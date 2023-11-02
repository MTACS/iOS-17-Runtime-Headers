
@interface EMQuery : NSObject <EFLoggable, NSCopying, NSSecureCoding> {
    NSString * _label;
    long long  _limit;
    NSPredicate * _predicate;
    unsigned long long  _queryOptions;
    NSArray * _sortDescriptors;
    CSSuggestion * _suggestion;
    Class  _targetClass;
    NSDictionary * _targetClassOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly) unsigned long long queryOptions;
@property (nonatomic, readonly, copy) NSArray *sortDescriptors;
@property (nonatomic, copy) CSSuggestion *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class targetClass;
@property (nonatomic, readonly, copy) NSDictionary *targetClassOptions;

+ (bool)_isValidSortDescriptor:(id)arg1 forTargetClass:(Class)arg2;
+ (void)addValidSortDescriptorKeyPaths:(id)arg1 forTargetClass:(Class)arg2;
+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToQuery:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(long long)arg4 queryOptions:(unsigned long long)arg5 targetClassOptions:(id)arg6 label:(id)arg7;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 label:(id)arg5;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 queryOptions:(unsigned long long)arg4 targetClassOptions:(id)arg5 label:(id)arg6;
- (id)initWithTargetClass:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 suggestion:(id)arg4 limit:(long long)arg5 queryOptions:(unsigned long long)arg6 targetClassOptions:(id)arg7 label:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)label;
- (long long)limit;
- (id)predicate;
- (unsigned long long)queryOptions;
- (id)queryWithPredicate:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (id)sortDescriptors;
- (id)suggestion;
- (Class)targetClass;
- (id)targetClassOptions;

@end
