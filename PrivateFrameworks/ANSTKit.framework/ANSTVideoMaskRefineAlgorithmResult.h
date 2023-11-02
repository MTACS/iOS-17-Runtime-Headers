
@interface ANSTVideoMaskRefineAlgorithmResult : ANSTResult {
    struct __CVBuffer { } * _hairMask;
    struct __CVBuffer { } * _personMask;
    struct __CVBuffer { } * _skinMask;
}

+ (id)new;

- (id)_init;
- (void)dealloc;
- (id)init;
- (id)initWithSkinMask:(struct __CVBuffer { }*)arg1 hairMask:(struct __CVBuffer { }*)arg2 personMask:(struct __CVBuffer { }*)arg3;
- (struct __CVBuffer { }*)refinedMaskForSemanticCategory:(id)arg1;

@end
