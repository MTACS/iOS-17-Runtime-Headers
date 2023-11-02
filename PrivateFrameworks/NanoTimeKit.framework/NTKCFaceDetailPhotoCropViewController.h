
@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {
    _NTKCFaceDetailPhotoCropViewController * _implementationVC;
}

@property (nonatomic, readonly) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NTKDigitalTimeLabelStyle *timeStyle;

- (void).cxx_destruct;
- (id)editor;
- (id)face;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)timeStyle;
- (void)viewDidLoad;

@end
