
@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler> {
    QLTGeneratorThumbnailRequest * _generatorRequest;
}

- (void).cxx_destruct;
- (void)didGenerateThumbnailForRequestWithUUID:(id)arg1 data:(id)arg2 bitmapFormat:(id)arg3 metadata:(id)arg4 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 iconFlavor:(int)arg6 thumbnailType:(long long)arg7 clientShouldTakeOwnership:(bool)arg8;
- (void)didUpdateStatus:(long long)arg1 ofThumbnailGenerationWithUUID:(id)arg2;
- (void)failedToGenerateThumbnailOfType:(long long)arg1 forRequestWithUUID:(id)arg2 error:(id)arg3;
- (id)initWithGeneratorRequest:(id)arg1;

@end
