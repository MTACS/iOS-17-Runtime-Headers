
@protocol MFLeaseControlling

@required

- (void)relinquishLeaseForItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <MFPlayerItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestLeaseForItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <MFPlayerItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
