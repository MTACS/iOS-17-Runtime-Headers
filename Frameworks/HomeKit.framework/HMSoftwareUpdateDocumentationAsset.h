
@interface HMSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, HMSoftwareUpdateDocumentationAssetExtractorDelegate, HMSoftwareUpdateUrlSessionDelegate, NSSecureCoding> {
    <HMSoftwareUpdateUrlSession> * _URLSession;
    NSInputStream * _archivedFileStream;
    <HMSoftwareUpdateDocumentationAssetDelegate> * _delegate;
    NSError * _error;
    <HMSoftwareUpdateDocumentationAssetExtractor> * _extractor;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMSoftwareUpdateDocumentationMetadata * _metadata;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldAutomaticallyCache;
    long long  _state;
}

@property (readonly, copy) NSURL *URL;
@property (nonatomic, retain) <HMSoftwareUpdateUrlSession> *URLSession;
@property (nonatomic, retain) NSInputStream *archivedFileStream;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property <HMSoftwareUpdateDocumentationAssetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMSoftwareUpdateDocumentation *documentation;
@property (readonly, copy) NSError *error;
@property (nonatomic, retain) <HMSoftwareUpdateDocumentationAssetExtractor> *extractor;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *metadata;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) bool shouldAutomaticallyCache;
@property (readonly) long long state;
@property (readonly) Class superclass;

+ (id)assetDirectoryURL;
+ (id)assetWithURL:(id)arg1;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)URLSession;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)archiveURL;
- (id)archivedFileStream;
- (id)bundleURL;
- (void)cancelDownload;
- (void)cancelUnarchiveWithError:(id)arg1;
- (id)delegate;
- (id)documentation;
- (bool)documentationIsCached;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)extractor;
- (void)finishDownload;
- (void)finishUnarchive;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationMetadata:(id)arg1;
- (id)initWithDocumentationMetadata:(id)arg1 urlSession:(id)arg2 extractor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)metadata;
- (id)metadataURL;
- (id)propertyDescription;
- (bool)saveWithError:(id*)arg1;
- (void)setArchivedFileStream:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExtractionProgress:(double)arg1;
- (void)setExtractor:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setURLSession:(id)arg1;
- (id)shortDescription;
- (bool)shouldAutomaticallyCache;
- (void)startCaching;
- (void)startDownload;
- (void)startUnarchive;
- (long long)state;
- (bool)stateNeedsNotification;

@end
