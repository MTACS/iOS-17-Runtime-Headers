
@interface RBDisplayListTransform : NSObject <NSCopying> {
    struct DisplayListTransform { 
        struct vector<RB::DisplayListTransform::Term, 1UL, unsigned int> { 
            unsigned char _p[24]; 
            struct Term {} *_p; 
            unsigned int _size; 
            unsigned int _capacity; 
        } _terms; 
    }  _transform;
}

+ (id)transform;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addColorReplacementFrom:(struct { float x1; float x2; float x3; float x4; })arg1 to:(struct { float x1; float x2; float x3; float x4; })arg2 colorSpace:(int)arg3;
- (void)addColorReplacementTo:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2;
- (void)applyToDisplayList:(id)arg1;
- (id)applyingToDisplayList:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAll;

@end
