
@interface SFFormAutoFillFrameHandle : NSObject <NSCopying, NSSecureCoding, WBUFormAutoFillFrameHandle> {
    NSURL * _URL;
    _WKFrameHandle * _frameHandle;
    NSNumber * _pageID;
    struct __SecTrust { } * _serverTrust;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *pageID;
@property (nonatomic, readonly, copy) NSData *serializedData;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSGlobalFrameIdentifier *webFrameIdentifier;
@property (nonatomic, readonly) NSURL *webui_URL;
@property (nonatomic, readonly) struct __SecTrust { }*webui_serverTrust;

+ (id)frameHandleFromSerializedData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameHandle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrameHandle:(id)arg1 URL:(id)arg2 serverTrust:(struct __SecTrust { }*)arg3 pageID:(id)arg4;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pageID;
- (id)serializedData;
- (id)webFrameIdentifier;
- (id)webui_URL;
- (struct __SecTrust { }*)webui_serverTrust;

@end
