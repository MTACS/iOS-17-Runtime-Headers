
@protocol HFCharacteristicValueWriter <NSObject>

@required

- (void)executeActionSet:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMActionSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)executeActions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMHome *)hf_home;
- (void)performBatchCharacteristicRequest:(HMCharacteristicBatchRequest *)arg1;

@end
