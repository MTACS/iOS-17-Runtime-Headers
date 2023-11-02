
@interface SGSuggestionAction : NSObject {
    id /* block */  _handler;
    NSString * _title;
}

+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)title;

@end
