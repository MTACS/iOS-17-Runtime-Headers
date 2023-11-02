
@protocol APKOutputDeviceCommunicationChannel <NSObject>

@required

- (void)close;
- (id /* block */)onClose:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)onData:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSData *, void*, id, SEL
- (void)sendData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setOnClose:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setOnData:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@end
