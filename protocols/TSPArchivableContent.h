
@protocol TSPArchivableContent <NSObject>

@required

- (const void*)fieldPath;
- (bool)isContentUnknown;
- (bool)isDiff;
- (unsigned long long)messageVersion;

@end
