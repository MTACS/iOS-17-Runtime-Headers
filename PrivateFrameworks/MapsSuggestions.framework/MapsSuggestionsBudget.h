
@interface MapsSuggestionsBudget : NSObject <MapsSuggestionsCondition, MapsSuggestionsObject> {
    NSMutableDictionary * _data;
    <MapsSuggestionsBudgetDelegate> * _delegate;
    NSString * _name;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    struct vector<MSg::_RollingWindowBudgetRule, std::allocator<MSg::_RollingWindowBudgetRule>> { 
        struct _RollingWindowBudgetRule {} *__begin_; 
        struct _RollingWindowBudgetRule {} *__end_; 
        struct __compressed_pair<MSg::_RollingWindowBudgetRule *, std::allocator<MSg::_RollingWindowBudgetRule>> { 
            struct _RollingWindowBudgetRule {} *__value_; 
        } __end_cap_; 
    }  _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addRollingWindowOfCount:(unsigned long long)arg1 perDuration:(const void*)arg2 name:(id)arg3;
- (void)addRollingWindowOfCount:(unsigned long long)arg1 perTimeInterval:(double)arg2 name:(id)arg3;
- (id)description;
- (bool)hasBudgetLeft;
- (id)initWithDelegate:(id)arg1 name:(id)arg2;
- (bool)isTrue;
- (id)nameForJSON;
- (id)objectForJSON;
- (id)q_loadStateForRuleName:(id)arg1;
- (bool)q_saveStateForRuleName:(id)arg1 state:(id)arg2;
- (void)reset;
- (bool)spendAtTime:(id)arg1;
- (bool)spendNow;
- (id)uniqueName;

@end
