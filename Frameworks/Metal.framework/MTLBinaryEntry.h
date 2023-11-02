
@interface MTLBinaryEntry : NSObject {
    NSObject<OS_dispatch_data> * _airScript;
    unsigned long long  _binaryPosition;
    NSObject<OS_dispatch_data> * _bitcode;
    NSObject<OS_dispatch_data> * _data;
    NSArray * _importedLibraries;
    NSArray * _importedSymbols;
    unsigned long long  _index;
    NSObject<OS_dispatch_data> * _reflectionBlock;
    int  _reflectionFlags;
}

@property NSObject<OS_dispatch_data> *airScript;
@property (readonly) unsigned long long binaryPosition;
@property NSObject<OS_dispatch_data> *bitcode;
@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property unsigned long long index;
@property (readonly) NSObject<OS_dispatch_data> *reflectionBlock;
@property (readonly) int reflectionFlags;

- (void)addReflectionWithData:(id)arg1 flag:(int)arg2;
- (id)airScript;
- (unsigned long long)binaryPosition;
- (id)bitcode;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)importedLibraries;
- (id)importedSymbols;
- (unsigned long long)index;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 binaryPosition:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3;
- (id)initWithData:(id)arg1 reflectionBlock:(id)arg2;
- (id)initWithData:(id)arg1 reflectionBlock:(id)arg2 binaryPosition:(unsigned long long)arg3;
- (void)internalInitWithData:(id)arg1 reflectionBlock:(id)arg2 binaryPosition:(unsigned long long)arg3;
- (id)reflectionBlock;
- (int)reflectionFlags;
- (void)setAirScript:(id)arg1;
- (void)setBitcode:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
