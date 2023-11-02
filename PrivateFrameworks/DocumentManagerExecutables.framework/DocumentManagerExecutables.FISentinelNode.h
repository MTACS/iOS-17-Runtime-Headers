
@interface DocumentManagerExecutables.FISentinelNode : FICustomNode

@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) FPItem *fpItem;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *typeIdentifier;

- (void).cxx_destruct;
- (id)childItemCount;
- (id)contentType;
- (id)displayName;
- (id)doc_lastUsedDate;
- (id)fileSize;
- (id)fileURL;
- (id)filename;
- (id)fpItem;
- (id)identifier;
- (id)init;
- (bool)isFolder;
- (id)modificationDate;
- (id)providerDomainID;
- (id)providerID;
- (id)typeIdentifier;

@end
