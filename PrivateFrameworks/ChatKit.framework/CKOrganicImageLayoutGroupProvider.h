
@interface CKOrganicImageLayoutGroupProvider : NSObject <CKTranscriptCustomLayoutGroupProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_intersectSpecForIndex:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_orientationForChatItemSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_rotationForChatItem:(id)arg1 leftRotated:(bool)arg2;
- (double)_setLayoutRecipesForChatItems:(id)arg1;
- (id)_startOffsetSpecForCount:(unsigned long long)arg1;
- (id)_startRotationSpec;
- (struct CGSize { double x1; double x2; })_targetSizeForChatItem:(id)arg1 totalItemCount:(unsigned long long)arg2;
- (id)layoutGroupForDatasourceItems:(id)arg1 environment:(id)arg2 layoutItems:(id)arg3;
- (double)scalarForSize:(struct CGSize { double x1; double x2; })arg1 count:(unsigned long long)arg2;

@end
