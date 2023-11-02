
@interface CRKConcreteSharingAirDropTransfer : NSObject <CRKSharingAirDropTransfer, SFAirDropClassroomTransferDelegate> {
    bool  _autoAccept;
    NSString * _bundleID;
    NSArray * _destFileURLs;
    NSSet * _fileURLs;
    bool  _hideProgress;
    NSString * _identifier;
    NSString * _itemsDescription;
    SFAirDropClassroomTransferManager * _manager;
    NSData * _previewImageData;
    id /* block */  _resultHandler;
    NSString * _senderName;
    NSString * _sourceBundleID;
}

@property (nonatomic, readonly) bool autoAccept;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *destFileURLs;
@property (nonatomic, readonly, copy) NSSet *fileURLs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideProgress;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *itemsDescription;
@property (nonatomic, readonly) SFAirDropClassroomTransferManager *manager;
@property (nonatomic, readonly, copy) NSData *previewImageData;
@property (nonatomic, readonly) id /* block */ resultHandler;
@property (nonatomic, readonly, copy) NSString *senderName;
@property (nonatomic, readonly, copy) NSString *sourceBundleID;
@property (readonly) Class superclass;

+ (id)UTIForURL:(id)arg1;
+ (id)infoForFileURL:(id)arg1;
+ (long long)transferStateForState:(long long)arg1;

- (void).cxx_destruct;
- (bool)autoAccept;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)destFileURLs;
- (id)fileURLs;
- (bool)hideProgress;
- (id)identifier;
- (id)initWithAutoAccept:(bool)arg1 hideProgress:(bool)arg2 senderName:(id)arg3 previewImageData:(id)arg4 bundleID:(id)arg5 sourceBundleID:(id)arg6 itemsDescription:(id)arg7 fileURLs:(id)arg8 resultHandler:(id /* block */)arg9;
- (void)invalidate;
- (id)itemsDescription;
- (id)manager;
- (id)previewImageData;
- (void)propagateResultForIdentifier:(id)arg1 withSuccess:(bool)arg2 error:(id)arg3;
- (id /* block */)resultHandler;
- (id)senderName;
- (void)setDestFileURLs:(id)arg1;
- (id)sourceBundleID;
- (id)transferInfoDictionary;
- (void)transferWithIdentifierWasAccepted:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1;
- (void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2;
- (void)updateWithState:(long long)arg1 completion:(id /* block */)arg2;

@end
