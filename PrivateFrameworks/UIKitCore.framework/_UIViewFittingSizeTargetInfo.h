
@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying> {
    bool  _dummy;
    float  _horizontalPriority;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    float  _verticalPriority;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTargetInfo:(id)arg1;

@end
