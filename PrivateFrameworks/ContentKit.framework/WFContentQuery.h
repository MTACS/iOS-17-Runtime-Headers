
@interface WFContentQuery : NSObject <WFContentPropertyContainer> {
    WFContentPredicate * _predicate;
    struct _WFContentSlice { 
        unsigned long long startIndex; 
        unsigned long long endIndex; 
    }  _slice;
    NSArray * _sortDescriptors;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSSet *containedProperties;
@property (nonatomic, readonly) WFContentPredicate *predicate;
@property (nonatomic) struct _WFContentSlice { unsigned long long x1; unsigned long long x2; } slice;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (bool)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(id /* block */)arg2;
- (id)containedProperties;
- (id)description;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;
- (void)runWithObjects:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runWithObjects:(id)arg1 propertySubstitutor:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)setSlice:(struct _WFContentSlice { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (struct _WFContentSlice { unsigned long long x1; unsigned long long x2; })slice;
- (id)sortDescriptors;
- (id)userInfo;

@end
