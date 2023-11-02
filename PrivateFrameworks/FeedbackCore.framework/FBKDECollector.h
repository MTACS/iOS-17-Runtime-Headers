
@interface FBKDECollector : NSObject <FBKAttachmentProvider> {
    NSMutableSet * __attachments;
    bool  _alreadyHandledURL;
    NSArray * _attachmentDescriptors;
    NSString * _bugSessionIdentifier;
    FBKGroupedDevice * _device;
    <FBKFilerForm> * _form;
    <FBKAttachmentListenerDelegate> * _listener;
    bool  _loadingBugSession;
    NSSet * _sessionCapabilities;
}

@property (retain) NSMutableSet *_attachments;
@property bool alreadyHandledURL;
@property (nonatomic, retain) NSArray *attachmentDescriptors;
@property (nonatomic, retain) NSString *bugSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBKGroupedDevice *device;
@property (nonatomic) <FBKFilerForm> *form;
@property (readonly) unsigned long long hash;
@property <FBKAttachmentListenerDelegate> *listener;
@property bool loadingBugSession;
@property (retain) NSSet *sessionCapabilities;
@property (readonly) Class superclass;

+ (id)bundleIDsFromAreas:(id)arg1;
+ (id)parametersForGatheringExtension:(id)arg1 answers:(id)arg2 session:(id)arg3 givenParameters:(id)arg4;
+ (id)parametersFromAnswers:(id)arg1;

- (void).cxx_destruct;
- (void)_addAttachment:(id)arg1;
- (id)_attachments;
- (void)_didCollectGroup:(id)arg1 forAttachment:(id)arg2;
- (void)_removeAttachment:(id)arg1;
- (void)_updateAttachment:(id)arg1 withState:(long long)arg2;
- (void)_updateAttachmentsWithRequirements:(id)arg1 alreadyCollectedGroups:(id)arg2 alreadyStartedCollections:(id)arg3 deferredCollections:(id)arg4;
- (bool)alreadyHandledURL;
- (id)attachmentDescriptors;
- (id)attachmentFromRequirement:(id)arg1 withExtension:(id)arg2;
- (id)attachmentFromRequirement:(id)arg1 withExtension:(id)arg2 urlExtension:(id)arg3;
- (id)attachments;
- (id)bugSession;
- (id)bugSessionIdentifier;
- (void)cancelCollection:(id)arg1;
- (id)collectorError;
- (id)description;
- (id)device;
- (void)fetchTextDataOnMatcherPredicates:(id)arg1 completion:(id /* block */)arg2;
- (void)finishInitializationWithCollected:(id)arg1 device:(id)arg2 error:(id)arg3 form:(id)arg4 ongoing:(id)arg5 deferred:(id)arg6 requirements:(id)arg7 sessionCapabilities:(id)arg8 urlExtensions:(id)arg9;
- (id)form;
- (void)gatherFilesForAttachment:(id)arg1 answers:(id)arg2;
- (id)gatherFilesForExtension:(id)arg1 answers:(id)arg2;
- (bool)hasFilePromises;
- (bool)hasUnmetRequirements;
- (id)identifier;
- (id)initWithRequirements:(id)arg1 forDevice:(id)arg2 filerForm:(id)arg3 extensionsFromURL:(id)arg4 listener:(id)arg5 shouldGetSessionStatus:(bool)arg6 shouldCheckDeferredLogs:(bool)arg7 attachmentDescriptors:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)listener;
- (bool)loadingBugSession;
- (id)platform;
- (id)processAlreadyCollectedGroups:(id)arg1 withRequirements:(id)arg2;
- (id)processOngoingDECollections:(id)arg1 withRequirements:(id)arg2 isDeferred:(bool)arg3;
- (void)processURLExtensions:(id)arg1 withMatcherPredicates:(id)arg2;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (id)requirements;
- (id)sessionCapabilities;
- (void)setAlreadyHandledURL:(bool)arg1;
- (void)setAttachmentDescriptors:(id)arg1;
- (void)setBugSessionIdentifier:(id)arg1;
- (void)setForm:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setLoadingBugSession:(bool)arg1;
- (void)setSessionCapabilities:(id)arg1;
- (void)set_attachments:(id)arg1;
- (void)updateRequirements:(id)arg1;

@end
