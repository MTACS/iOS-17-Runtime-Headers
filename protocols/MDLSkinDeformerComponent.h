
@protocol MDLSkinDeformerComponent <MDLComponent>

@required

- (unsigned long long)copyJointBindTransformsInto:(void *)arg1 maxCount:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*
- (NSData *)jointBindTransforms;
- (NSArray *)jointPaths;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })meshBindTransform;

@end
