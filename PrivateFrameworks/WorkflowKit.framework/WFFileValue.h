
@interface WFFileValue : NSObject <WFVariableSerialization> {
    NSURL * _URL;
    NSData * _bookmarkData;
    NSString * _cachedDisplayName;
    NSString * _displayName;
    WFFileLocation * _fileLocation;
    NSString * _filename;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSData *bookmarkData;
@property (nonatomic, readonly) NSString *cachedDisplayName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) WFFileLocation *fileLocation;
@property (nonatomic, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createBookmarkWithFileURL:(id)arg1 workflowID:(id)arg2;
+ (id)defaultValueWithWorkflowID:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)bookmarkData;
- (id)cachedDisplayName;
- (id)displayName;
- (id)fileLocation;
- (id)filename;
- (id)initWithBookmarkData:(id)arg1 filename:(id)arg2 displayName:(id)arg3;
- (id)initWithFileLocation:(id)arg1 filename:(id)arg2 displayName:(id)arg3;
- (id)initWithFileLocation:(id)arg1 filename:(id)arg2 displayName:(id)arg3 reloadDisplayName:(bool)arg4;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 workflowID:(id)arg2;
- (bool)isSupportedOnCurrentDevice;
- (id)resolveURLWithWorkflowID:(id)arg1 error:(id*)arg2;
- (id)serializedRepresentation;

@end
