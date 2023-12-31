
@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    bool  mHaveRaisedFileDescriptorLimit;
    TSUPointerKeyDictionary * mImageDataToImageProviderMap;
    unsigned long long  mOpenFileDescriptorLimit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)isValidImageData:(id)arg1;
+ (Class)p_providerClassForData:(id)arg1;
+ (id)sharedPool;

- (void)addInterestInProviderForData:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)flushImageProviders;
- (id)init;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)arg1;
- (id)p_providerForData:(id)arg1 temporary:(bool)arg2 shouldValidate:(bool)arg3;
- (unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)arg1;
- (unsigned long long)p_removeProvidersWithZeroInterest;
- (void)p_updateFileDescriptorLimit;
- (id)providerForData:(id)arg1 shouldValidate:(bool)arg2;
- (oneway void)release;
- (void)removeInterestInProviderForData:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(bool)arg2;
- (void)willCloseDocumentContext:(id)arg1;
- (void)willCullData:(id)arg1;

@end
