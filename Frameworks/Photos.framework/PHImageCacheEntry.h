
@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {
    NSDictionary * _additionalInfo;
    NSError * _error;
    NSMutableArray * _handlersWaitingOnResult;
    struct CGImage { } * _imageRef;
    int  _imageRequestIDForPopulatingCache;
    bool  _isCancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageRequestIDForPopulatingCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callWaiters:(id)arg1 wasCancelled:(bool)arg2;
- (void)addNotifyHandler:(id /* block */)arg1;
- (id)additionalInfo;
- (void)cancel;
- (struct CGImage { }*)createImageRef;
- (void)dealloc;
- (bool)hasImageRef;
- (int)imageRequestIDForPopulatingCache;
- (id)init;
- (bool)isCancelled;
- (void)populateWithImageRef:(struct CGImage { }*)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(id /* block */)arg4;
- (void)prepareForReuse;
- (void)setImageRequestIDForPopulatingCache:(int)arg1;

@end
