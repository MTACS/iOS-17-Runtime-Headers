
@protocol _UIDocumentPickerDirectoryObserverItem <NSObject>

@required

- (NSString *)contentType;
- (NSDate *)modificationDate;
- (NSString *)title;
- (NSURL *)url;

@end
