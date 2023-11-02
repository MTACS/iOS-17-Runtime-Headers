
@interface IMPreviewGeneratorManager : NSObject {
    NSDictionary * _UTITypes;
    NSDictionary * _dynamicTypes;
}

@property (nonatomic, copy) NSDictionary *UTITypes;
@property (nonatomic, copy) NSDictionary *dynamicTypes;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)UTITypes;
- (Class)_previewGeneratorClassForSourceURL:(id)arg1;
- (id)dynamicTypes;
- (bool)generateAndPersistContactCardPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 size:(out struct CGSize { double x1; double x2; }*)arg4 previewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg5 error:(id*)arg6;
- (bool)generateAndPersistMapPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 size:(out struct CGSize { double x1; double x2; }*)arg4 previewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg5 error:(id*)arg6;
- (bool)generateAndPersistMetadataFromSourceURL:(id)arg1 destinationURL:(id)arg2 senderContext:(id)arg3 size:(out struct CGSize { double x1; double x2; }*)arg4 constraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg5 error:(id*)arg6;
- (bool)generateAndPersistPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 senderContext:(id)arg3 size:(out struct CGSize { double x1; double x2; }*)arg4 balloonBundleID:(id)arg5 previewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg6 error:(id*)arg7;
- (id)init;
- (bool)movePreviewToDiskCache:(id)arg1 previewURL:(id)arg2 error:(id*)arg3;
- (struct CGImage { }*)newPreviewFromSourceURL:(id)arg1 senderContext:(id)arg2 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; bool x5; })arg3 error:(id*)arg4;
- (bool)persistPreviewToDiskCache:(struct CGImage { }*)arg1 previewURL:(id)arg2 error:(id*)arg3;
- (Class)previewGeneratorClassForUTIType:(id)arg1;
- (void)setDynamicTypes:(id)arg1;
- (void)setUTITypes:(id)arg1;

@end
