
@protocol BNPresentableContextHostToClientInterface <NSObject>

@required

- (void)__bannerWillNotAppearWithReason:(NSString *)arg1 error:(out id*)arg2;
- (oneway void)__bannerWillNotAppearWithReason:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)__handleTemplateContentEvent:(NSNumber *)arg1 error:(out id*)arg2;
- (oneway void)__handleTemplateContentEvent:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)__setBannerAppearState:(NSNumber *)arg1 reason:(NSString *)arg2 error:(out id*)arg3;
- (oneway void)__setBannerAppearState:(void *)arg1 reason:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)__setUserInteractionWillBegin:(NSNumber *)arg1 error:(out id*)arg2;
- (oneway void)__setUserInteractionWillBegin:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
