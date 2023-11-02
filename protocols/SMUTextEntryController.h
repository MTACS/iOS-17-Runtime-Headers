
@protocol SMUTextEntryController <NSObject>

@required

- (NSString *)doneText;
- (NSString *)message;
- (id /* block */)onCompletion:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setDoneText:(NSString *)arg1;
- (void)setMessage:(NSString *)arg1;
- (void)setOnCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setText:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)text;
- (NSString *)title;

@end
