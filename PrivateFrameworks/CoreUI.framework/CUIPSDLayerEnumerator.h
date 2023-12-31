
@interface CUIPSDLayerEnumerator : NSEnumerator {
    unsigned int  _currentIndex;
    bool  _isImageFile;
    CUIPSDLayerGroupRef * _layerGroup;
}

+ (id)enumeratorWithPSDImage:(id)arg1;
+ (id)enumeratorWithPSDLayerGroup:(id)arg1;

- (id)allObjects;
- (void)dealloc;
- (id)initWithPSDImage:(id)arg1;
- (id)initWithPSDLayerGroup:(id)arg1;
- (id)nextObject;

@end
