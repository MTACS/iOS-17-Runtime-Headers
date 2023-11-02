
@interface ATXContextHeuristicResult : NSObject {
    NSSet * _additionalRefreshTriggers;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) NSSet *additionalRefreshTriggers;
@property (nonatomic, readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (id)additionalRefreshTriggers;
- (id)init;
- (id)initWithSuggestions:(id)arg1 additionalRefreshTriggers:(id)arg2;
- (id)suggestions;

@end
