
@interface SYDocumentAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _indexKey;
    NSURL * _originalFileURL;
    NSDate * _receivedDate;
    SYDocumentSender * _sender;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *indexKey;
@property (nonatomic, readonly) NSURL *originalFileURL;
@property (nonatomic, readonly) NSDate *receivedDate;
@property (nonatomic, readonly) SYDocumentSender *sender;
@property (nonatomic, readonly) NSString *sourceBundleIdentifier;

+ (void)_documentAttributesForFileAtURL:(id)arg1 completion:(id /* block */)arg2;
+ (bool)_removeDocumentAttributesForFileAtURL:(id)arg1 keepDocumentRelatedUniqueIdentifierKey:(bool)arg2 error:(id*)arg3;
+ (id)documentAttributesForFileAtURL:(id)arg1;
+ (id)documentAttributesForFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)documentAttributesFromData:(id)arg1;
+ (id)documentAttributesFromData:(id)arg1 error:(id*)arg2;
+ (bool)removeDocumentAttributesForFileAtURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentationWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)indexKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 indexKey:(id)arg2 fileURL:(id)arg3 receivedDate:(id)arg4 sender:(id)arg5;
- (id)initWithSourceBundleIdentifier:(id)arg1 indexKey:(id)arg2 originalFileURL:(id)arg3 receivedDate:(id)arg4 sender:(id)arg5;
- (id)originalFileURL;
- (id)receivedDate;
- (bool)saveToFileURL:(id)arg1 additionalAttributes:(id)arg2 error:(id*)arg3;
- (bool)saveToFileURL:(id)arg1 error:(id*)arg2;
- (id)sender;
- (id)sourceBundleIdentifier;

@end
