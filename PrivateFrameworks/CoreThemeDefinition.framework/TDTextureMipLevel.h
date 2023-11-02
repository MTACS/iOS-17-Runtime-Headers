
@interface TDTextureMipLevel : NSManagedObject

@property (nonatomic, retain) TDTextureFace *face;
@property (nonatomic) short level;
@property (nonatomic, retain) TDTextureRenditionSpec *texture;
@property (nonatomic, retain) TDTextureImageRenditionSpec *textureImage;

@end
