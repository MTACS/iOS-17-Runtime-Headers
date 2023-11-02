
@interface PKShape : NSObject {
    PKStroke * _originalStroke;
    NSArray * _strokes;
    long long  _type;
}

@property (nonatomic, readonly) bool fillable;
@property (nonatomic, readonly) PKStroke *originalStroke;
@property (nonatomic, readonly) NSArray *strokes;
@property (nonatomic, readonly) long long type;

+ (bool)isFillableForShapeType:(long long)arg1;
+ (id)snapToShapeActionNameForNumShapes:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)fillable;
- (id)initWithShapeType:(long long)arg1 strokes:(id)arg2 originalStroke:(id)arg3;
- (id)originalStroke;
- (id)strokes;
- (long long)type;

@end
