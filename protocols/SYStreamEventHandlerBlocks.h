
@protocol SYStreamEventHandlerBlocks <NSObject>

@required

- (id /* block */)onBytesAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (id /* block */)onClose:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (id /* block */)onEndOfFile:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (id /* block */)onError:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (id /* block */)onOpenComplete:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (id /* block */)onSpaceAvailable:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSStream *, void*, id, SEL
- (void)setOnBytesAvailable:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*
- (void)setOnClose:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*
- (void)setOnEndOfFile:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*
- (void)setOnError:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*
- (void)setOnOpenComplete:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*
- (void)setOnSpaceAvailable:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSStream *, void*

@end
