
@interface OU3DObjectMerger : NSObject

- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })crossClassNMS:(const void*)arg1;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })mergeCabinets:(const void*)arg1 iou_mat:(const void*)arg2;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })mergeOtherObjects:(const void*)arg1;
- (struct vector<OUBox3d, std::allocator<OUBox3d>> { struct OUBox3d {} *x1; struct OUBox3d {} *x2; struct __compressed_pair<OUBox3d *, std::allocator<OUBox3d>> { struct OUBox3d {} *x_3_1_1; } x3; })removeLowHeightStairObjects:(const void*)arg1;

@end
