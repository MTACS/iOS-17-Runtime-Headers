
@interface _SWPendingCollaboration : NSObject <NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding> {
    _SWCollaborationMetadata * _collaborationMetadata;
    NSURL * _fileURL;
}

@property (nonatomic, copy) _SWCollaborationMetadata *collaborationMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (bool)supportsSecureCoding;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)collaborationMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithAPIMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileAtURL:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollaborationContent:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)processSigningQueue;
- (void)setCollaborationMetadata:(id)arg1;
- (void)setFileURL:(id)arg1;
- (id)softSigningController;
- (id)writableTypeIdentifiersForItemProvider;

@end
