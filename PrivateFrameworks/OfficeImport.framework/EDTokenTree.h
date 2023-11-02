
@interface EDTokenTree : NSObject

+ (id)buildSubtree:(unsigned int)arg1 formula:(id)arg2;
+ (id)buildSubtreeAtIndex:(unsigned int*)arg1 formula:(id)arg2;
+ (unsigned int)childCountForToken:(unsigned int)arg1 formula:(id)arg2;
+ (bool)isTokenAttrASum:(unsigned short)arg1;
+ (bool)isTokenNoOp:(unsigned int)arg1 formula:(id)arg2;

@end
