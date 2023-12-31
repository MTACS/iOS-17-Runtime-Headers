
@interface CEKLightingCubeRenderer : NSObject {
    CEKLightingCubeAppearance * _appearance;
    long long  _components;
    CEKLightingCube * _cube;
}

- (void).cxx_destruct;
- (id)initWithCube:(id)arg1 appearance:(id)arg2 components:(long long)arg3;
- (void)renderInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 cornerRadius:(double)arg4 stroke:(double)arg5;

@end
