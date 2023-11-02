
@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol> {
    NSString * _cacheFileBasePath;
    NSString * _clientModelId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientModelIdFromFileName:(id)arg1;
+ (id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)arg1;
+ (id)unarchiveCacheFileFromReadOnlyFileHandle:(id)arg1;

- (void).cxx_destruct;
- (id)cacheFilePath;
- (bool)createCacheFileForClientModelCacheUpdate:(id)arg1;
- (bool)deleteCachedSuggestionsFile;
- (id)initWithCacheFileBasePath:(id)arg1 clientModelId:(id)arg2;
- (id)readOnlyFileHandleForSuggestionsCache;
- (id)readSuggestionsFromCache;
- (id)serializeSuggestionsData:(id)arg1;
- (bool)writeSerializedDataToCacheFile:(id)arg1;

@end
