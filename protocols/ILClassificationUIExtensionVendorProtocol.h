
@protocol ILClassificationUIExtensionVendorProtocol <NSObject>

@required

- (oneway void)classificationResponseForRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ILClassificationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ILClassificationResponse *, NSError *, void*
- (oneway void)prepareForClassificationRequest:(ILClassificationRequest *)arg1;

@end
