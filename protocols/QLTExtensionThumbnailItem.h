
@protocol QLTExtensionThumbnailItem <NSObject>

@required

- (UTType *)contentType;
- (bool)needsAccessToExternalResources;
- (void)provideURLWrapper:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *, void*
- (void)setNeedsAccessToExternalResources:(bool)arg1;

@end
