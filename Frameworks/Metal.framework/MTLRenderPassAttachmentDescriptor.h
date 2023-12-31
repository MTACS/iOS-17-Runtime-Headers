
@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long depthPlane;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long loadAction;
@property (nonatomic) unsigned long long resolveDepthPlane;
@property (nonatomic) unsigned long long resolveLevel;
@property (nonatomic) unsigned long long resolveSlice;
@property (nonatomic, retain) <MTLTexture> *resolveTexture;
@property (nonatomic) unsigned long long slice;
@property (nonatomic) unsigned long long storeAction;
@property (nonatomic) unsigned long long storeActionOptions;
@property (nonatomic, retain) <MTLTexture> *texture;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
