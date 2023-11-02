
@interface _CPLWeakLibraryManager : NSObject {
    CPLLibraryManager * _weakLibraryManager;
}

@property CPLLibraryManager *weakLibraryManager;

- (void).cxx_destruct;
- (id)initWithLibraryManager:(id)arg1;
- (void)setWeakLibraryManager:(id)arg1;
- (id)weakLibraryManager;

@end
