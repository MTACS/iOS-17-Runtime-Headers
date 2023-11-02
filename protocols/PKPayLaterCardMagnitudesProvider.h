
@protocol PKPayLaterCardMagnitudesProvider <NSObject>

@required

- (void)refreshMagnitudes;
- (void)setUpdateHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPayLaterCardMagnitudes *, void*
- (id /* block */)updateHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, PKPayLaterCardMagnitudes *, void*, id, SEL

@end
