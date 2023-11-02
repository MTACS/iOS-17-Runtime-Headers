
@protocol SPTagSeparationProtocol <NSObject>

@required

- (void)startRefreshingTagSeparationWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)stopRefreshingTagSeparation;
- (void)tagSeparationStateChanged:(void *)arg1 beaconUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)tagSeparationStateChanged:(void *)arg1 beaconUUID:(void *)arg2 location:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSUUID *, SPBeaconLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
