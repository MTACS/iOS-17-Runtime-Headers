
@protocol HMDMediaContentProfileAccessControlModelUpdateReceiver <NSObject>

@required

- (void)mediaContentProfileAccessControlModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDMediaContentProfileAccessControlModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)mediaContentProfileAccessControlModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDMediaContentProfileAccessControlModel *, HMDMediaContentProfileAccessControlModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*

@end
