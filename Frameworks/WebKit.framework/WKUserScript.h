
@interface WKUserScript : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::UserScript> { 
        struct type { 
            unsigned char __lx[120]; 
        } data; 
    }  _userScript;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) WKContentWorld *_contentWorld;
@property (nonatomic, readonly) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForMainFrameOnly, nonatomic, readonly) bool forMainFrameOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long injectionTime;
@property (nonatomic, readonly, copy) NSString *source;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_contentWorld;
- (id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3 includeMatchPatternStrings:(id)arg4 excludeMatchPatternStrings:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 deferRunningUntilNotification:(bool)arg8;
- (id)_userContentWorld;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3 inContentWorld:(id)arg4;
- (long long)injectionTime;
- (bool)isForMainFrameOnly;
- (id)source;

@end
