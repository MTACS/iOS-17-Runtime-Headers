
@interface FigMetalBufferDescriptor : NSObject {
    int  _allocationHint;
    NSString * _label;
    unsigned long long  _length;
    unsigned long long  _options;
}

@property (nonatomic) int allocationHint;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (int)allocationHint;
- (id)init;
- (void)initFromDescriptor:(id)arg1;
- (id)label;
- (unsigned long long)length;
- (unsigned long long)options;
- (void)setAllocationHint:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
