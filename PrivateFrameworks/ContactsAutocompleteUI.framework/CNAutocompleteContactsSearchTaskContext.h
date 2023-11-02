
@interface CNAutocompleteContactsSearchTaskContext : NSObject {
    <CNAutocompleteSearchConsumer> * _consumer;
    NSMutableSet * _operations;
    NSMutableSet * _searchQueries;
    NSString * _text;
}

@property (nonatomic, readonly) <CNAutocompleteSearchConsumer> *consumer;
@property (nonatomic, readonly) NSMutableSet *operations;
@property (nonatomic, readonly) NSMutableSet *searchQueries;
@property (nonatomic, readonly) NSString *text;

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

- (void).cxx_destruct;
- (id)consumer;
- (bool)consumerRespondsToCallbacks;
- (bool)done;
- (id)operations;
- (id)searchQueries;
- (id)text;

@end
