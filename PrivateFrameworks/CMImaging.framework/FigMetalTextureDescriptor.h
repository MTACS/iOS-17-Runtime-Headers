
@interface FigMetalTextureDescriptor : NSObject {
    int  _allocationHint;
    MTLTextureDescriptor * _desc;
    bool  _isLinear;
    NSString * _label;
}

@property (nonatomic) int allocationHint;
@property (nonatomic, retain) MTLTextureDescriptor *desc;
@property (nonatomic) bool isLinear;
@property (nonatomic, retain) NSString *label;

- (void).cxx_destruct;
- (int)allocationHint;
- (id)desc;
- (id)init;
- (void)initFromDescriptor:(id)arg1;
- (bool)isLinear;
- (id)label;
- (void)setAllocationHint:(int)arg1;
- (void)setDesc:(id)arg1;
- (void)setIsLinear:(bool)arg1;
- (void)setLabel:(id)arg1;

@end
