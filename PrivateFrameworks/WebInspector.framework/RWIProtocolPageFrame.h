
@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *loaderId;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parentId;
@property (nonatomic, copy) NSString *securityOrigin;
@property (nonatomic, copy) NSString *url;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)identifier;
- (id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;
- (id)loaderId;
- (id)mimeType;
- (id)name;
- (id)parentId;
- (id)securityOrigin;
- (void)setIdentifier:(id)arg1;
- (void)setLoaderId:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentId:(id)arg1;
- (void)setSecurityOrigin:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_globalFrame;
+ (id)ik_pageFrameFromDOMDocument:(id)arg1;
+ (id)safe_initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5;

- (id)ik_resourceTreeWithResources:(id)arg1;

@end
