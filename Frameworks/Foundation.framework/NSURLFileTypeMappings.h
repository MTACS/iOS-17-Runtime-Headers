
@interface NSURLFileTypeMappings : NSObject

+ (id)sharedMappings;

- (id)MIMETypeForExtension:(id)arg1;
- (id)extensionsForMIMEType:(id)arg1;
- (id)preferredExtensionForMIMEType:(id)arg1;

@end
