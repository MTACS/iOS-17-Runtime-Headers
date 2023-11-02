
@protocol NTKArgonPublisherProviding <NSObject>

@required

- (void)publishKeyDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NTKArgonKeyDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unpublishKeyDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NTKArgonKeyDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
