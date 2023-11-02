
@interface _UISegmentedControlSegmentHoverIdentifier : NSObject <NSCopying> {
    long long  _index;
    bool  _isSelected;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) bool isSelected;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (long long)index;
- (id)initWithIndex:(long long)arg1 selected:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentifier:(id)arg1;
- (bool)isSelected;

@end
