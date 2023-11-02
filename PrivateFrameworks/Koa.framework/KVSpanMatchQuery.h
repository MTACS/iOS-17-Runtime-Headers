
@interface KVSpanMatchQuery : NSObject {
    NSString * _cleanText;
    long long  _locale;
    struct shared_ptr<skitbridge::Query> { 
        struct Query {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _query;
}

@property (nonatomic, readonly) struct shared_ptr<skitbridge::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; } query;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cleanText;
- (id)description;
- (id)init;
- (id)initWithQuery:(const void*)arg1 locale:(long long)arg2 cleanText:(id)arg3;
- (bool)isFieldTypeIncluded:(long long)arg1;
- (bool)isItemTypeIncluded:(long long)arg1;
- (id)locale;
- (struct shared_ptr<skitbridge::Query> { struct Query {} *x1; struct __shared_weak_count {} *x2; })query;
- (void)setIncludedFieldTypes:(id)arg1;
- (void)setIncludedItemTypes:(id)arg1;

@end
