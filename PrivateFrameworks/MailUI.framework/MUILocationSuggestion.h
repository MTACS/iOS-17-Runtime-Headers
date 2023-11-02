
@interface MUILocationSuggestion : MUIResultSuggestion {
    NSString * _address;
    NSDate * _date;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSDate *date;

+ (id)suggestionWithAddress:(id)arg1 date:(id)arg2 authors:(id)arg3 authorEmailAddresses:(id)arg4 objectID:(id)arg5 messageList:(id)arg6;

- (void).cxx_destruct;
- (id)address;
- (id)category;
- (id)date;
- (id)description;
- (id)initWithAddress:(id)arg1 date:(id)arg2 authors:(id)arg3 authorEmailAddresses:(id)arg4 objectID:(id)arg5 messageList:(id)arg6;

@end
