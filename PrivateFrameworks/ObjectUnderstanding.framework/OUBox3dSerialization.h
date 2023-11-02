
@interface OUBox3dSerialization : NSObject

- (struct OUBox3d { struct box3d { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[8]; } x1; })box3dFromDictionary:(id)arg1;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })boxes3dFromDictionary:(id)arg1;
- (id)dictionaryFromBox3d:(struct OUBox3d { struct box3d { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[8]; } x1; })arg1;
- (id)dictionaryFromBoxes3d:(struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })arg1;
- (id)dictionaryFromBoxes3dPointCloud:(struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })arg1 pointCloud:(id)arg2;
- (id)pointCloudFromDictionary:(id)arg1;

@end
