
@interface DSP_ADM : NSObject {
    void * _admLibrary;
}

@property (nonatomic) void*admLibrary;

- (void*)admLibrary;
- (id)createFactory;
- (void)dealloc;
- (id)init;
- (void)setAdmLibrary:(void*)arg1;

@end
