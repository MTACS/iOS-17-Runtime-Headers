
@interface SUCompletionsResponse : NSObject {
    NSArray * _completionItems;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *completionItems;
@property (nonatomic, readonly) NSString *title;

- (id)completionItems;
- (void)dealloc;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (id)title;

@end
