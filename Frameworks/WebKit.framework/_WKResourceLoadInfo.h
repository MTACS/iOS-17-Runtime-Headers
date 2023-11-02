
@interface _WKResourceLoadInfo : NSObject <NSSecureCoding, WKObject> {
    struct ObjectStorage<API::ResourceLoadInfo> { 
        struct type { 
            unsigned char __lx[136]; 
        } data; 
    }  _info;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *eventTimestamp;
@property (nonatomic, readonly) _WKFrameHandle *frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loadedFromCache;
@property (nonatomic, readonly) NSString *originalHTTPMethod;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly) _WKFrameHandle *parentFrame;
@property (nonatomic, readonly) unsigned long long resourceLoadID;
@property (nonatomic, readonly) long long resourceType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTimestamp;
- (id)frame;
- (id)initWithCoder:(id)arg1;
- (bool)loadedFromCache;
- (id)originalHTTPMethod;
- (id)originalURL;
- (id)parentFrame;
- (unsigned long long)resourceLoadID;
- (long long)resourceType;

@end
