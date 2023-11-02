
@protocol CLGeomagneticModelProviderProtocol <CLNotifierServiceProtocol>

@required

- (void)doAsync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*
- (void)doAsync:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*, id /* block */, void*, void, id /* block */, void*
- (bool)syncgetDoSync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, void*

@end
