
@interface PICurveControlPoint : NSObject <NSCopying> {
    bool  _editable;
    double  _x;
    double  _y;
}

@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 editable:(bool)arg3;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (double)x;
- (double)y;

@end
