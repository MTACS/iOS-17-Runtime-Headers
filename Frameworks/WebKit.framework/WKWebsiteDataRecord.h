
@interface WKWebsiteDataRecord : NSObject <WKObject> {
    struct ObjectStorage<API::WebsiteDataRecord> { 
        struct type { 
            unsigned char __lx[96]; 
        } data; 
    }  _websiteDataRecord;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) _WKWebsiteDataSize *_dataSize;
@property (nonatomic, readonly, copy) NSSet *dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_dataSize;
- (id)_originsStrings;
- (id)dataTypes;
- (void)dealloc;
- (id)description;
- (id)displayName;

@end
