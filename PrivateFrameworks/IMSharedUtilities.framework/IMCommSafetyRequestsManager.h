
@interface IMCommSafetyRequestsManager : NSObject {
    NSMutableDictionary * _cachedResults;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MADService * _service;
    id  _userSafetyClient;
}

@property (nonatomic, retain) NSMutableDictionary *cachedResults;
@property (nonatomic, retain) MADService *service;
@property (nonatomic, retain) id userSafetyClient;

+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_dispatchMADProcessingRequest:(id)arg1 withChatID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_identifierForURL:(id)arg1 withChatID:(id)arg2;
- (void)_setSensitiveValue:(bool)arg1 forIdentifier:(id)arg2;
- (bool)_shouldForceSensitivityResult;
- (id)cachedResultForContentAttachment:(id)arg1 withChatID:(id)arg2;
- (id)cachedResults;
- (void)dealloc;
- (id)init;
- (void)isSensitiveCGImage:(struct CGImage { }*)arg1 withOrientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)isSensitiveContent:(id)arg1 contentAttachmentType:(long long)arg2 useBlastDoor:(bool)arg3 withChatID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)isSensitiveContent:(id)arg1 contentAttachmentType:(long long)arg2 withChatID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)isSensitiveContent:(id)arg1 withChatID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)isSensitiveImage:(id)arg1 withChatID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)service;
- (void)setCachedResults:(id)arg1;
- (void)setService:(id)arg1;
- (void)setUserSafetyClient:(id)arg1;
- (id)userSafetyClient;

@end
