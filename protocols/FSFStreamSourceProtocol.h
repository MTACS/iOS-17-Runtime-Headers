
@protocol FSFStreamSourceProtocol <NSObject>

@required

- (bool)deleteCurrentStream;
- (bool)insert:(id <FSFCurareInteraction>)arg1 error:(id*)arg2;
- (NSDictionary *)retrieve:(NSSet *)arg1;
- (void)retrieve:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
