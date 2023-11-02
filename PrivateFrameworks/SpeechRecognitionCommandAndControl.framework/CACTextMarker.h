
@interface CACTextMarker : NSObject {
    NSData * _data;
    unsigned long long  _index;
}

+ (unsigned long long)lengthFromMarker:(id)arg1 toMarker:(id)arg2;
+ (bool)marker:(id)arg1 precedesMarker:(id)arg2;
+ (bool)marker:(id)arg1 precedesOrEqualsMarker:(id)arg2;
+ (id)markerWithData:(id)arg1;
+ (id)markerWithIndex:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithData:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
