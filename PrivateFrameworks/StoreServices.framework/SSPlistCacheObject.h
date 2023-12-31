
@interface SSPlistCacheObject : NSObject <SSCacheObject> {
    NSDictionary * _plist;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cacheObjectTypeIdentifier;

- (id)cacheObjectDataRepresentation;
- (id)cacheObjectTypeIdentifier;
- (void)dealloc;
- (id)initWithCacheObjectDataRepresentation:(id)arg1;
- (id)plist;
- (void)setPlist:(id)arg1;

@end
