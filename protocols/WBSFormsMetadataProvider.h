
@protocol WBSFormsMetadataProvider <NSObject>

@required

- (void)enumerateFormsUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct OpaqueFormAutoFillFrame { }*, WBSFormMetadata *, bool*, void*
- (unsigned long long)formCount;

@end
