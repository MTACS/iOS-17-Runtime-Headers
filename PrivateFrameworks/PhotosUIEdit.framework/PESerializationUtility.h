
@interface PESerializationUtility : NSObject

+ (long long)_playbackStyleForAutoLoopController:(id)arg1;
+ (unsigned short)_playbackVariationForAutoLoopController:(id)arg1;
+ (bool)adjustmentDataIsSupported:(id)arg1;
+ (id)compositionControllerForContentEditingInput:(id)arg1 asShot:(bool)arg2 error:(id*)arg3;
+ (id)compositionControllerForContentEditingInput:(id)arg1 asShot:(bool)arg2 source:(id)arg3 error:(id*)arg4;
+ (id)contentEditingOutputForContentEditingInput:(id)arg1 compositionController:(id)arg2 asset:(id)arg3 async:(bool)arg4 onlyChangingOriginalChoice:(bool)arg5;
+ (id)editSourceForContentEditingInput:(id)arg1 error:(id*)arg2;
+ (id)editSourceForContentEditingInput:(id)arg1 useEmbeddedPreview:(bool)arg2 error:(id*)arg3;
+ (id)editSourceForContentEditingInput:(id)arg1 useRawDisplaySizeImage:(bool)arg2 useEmbeddedPreview:(bool)arg3 error:(id*)arg4;
+ (id)renderCompositionController:(id)arg1 forContentEditingOutput:(id)arg2 scalePolicy:(id)arg3 applyVideoOrientationAsMetadata:(bool)arg4 queue:(id)arg5 completion:(id /* block */)arg6;

@end
