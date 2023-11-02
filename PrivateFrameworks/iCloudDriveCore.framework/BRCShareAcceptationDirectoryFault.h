
@interface BRCShareAcceptationDirectoryFault : BRCDirectoryItem <BRCShareAcceptationFault>

- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asShareAcceptationFault;
- (void)deleteShareAcceptationFault;
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 parentIDWhenSubitem:(id)arg3 appLibrary:(id)arg4 clientZone:(id)arg5 sharingOptions:(unsigned long long)arg6;
- (bool)isShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)markNeedsTransformIntoNormalFault;
- (void)stageShareAcceptationFaultWithName:(id)arg1;

@end
