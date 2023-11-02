
@interface MTLStitchedLibraryDescriptor : NSObject <NSCopying> {
    NSArray * _binaryArchives;
    NSArray * _functionGraphs;
    NSArray * _functions;
    unsigned long long  _options;
}

@property (nonatomic, copy) NSArray *binaryArchives;
@property (nonatomic, copy) NSArray *functionGraphs;
@property (nonatomic, copy) NSArray *functions;
@property (nonatomic) unsigned long long options;

- (id)binaryArchives;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionGraphs;
- (id)functions;
- (id)init;
- (unsigned long long)options;
- (void)setBinaryArchives:(id)arg1;
- (void)setFunctionGraphs:(id)arg1;
- (void)setFunctions:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
