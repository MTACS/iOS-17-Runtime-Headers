
@protocol SMUSystemDisplayMonitoring <NSObject>

@required

- (NSSet *)connectedIdentities;
- (<SMUSystemDisplayIdentity> *)mainIdentity;
- (id /* block */)onDisplayConnected:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SMUSystemDisplayIdentity> *, void*, id, SEL
- (id /* block */)onDisplayDisconnected:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SMUSystemDisplayIdentity> *, void*, id, SEL
- (void)setOnDisplayConnected:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SMUSystemDisplayIdentity> *, void*
- (void)setOnDisplayDisconnected:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SMUSystemDisplayIdentity> *, void*

@end
