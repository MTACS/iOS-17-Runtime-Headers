
@interface NUDevice_iOS : NUDevice {
    NURenderer * _renderer;
}

- (void).cxx_destruct;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newRendererWithCIContextOptions:(id)arg1 error:(out id*)arg2;
- (long long)_preferredSampleMode;
- (id)debugDescription;
- (unsigned long long)family;
- (id)initWithName:(id)arg1;

@end
