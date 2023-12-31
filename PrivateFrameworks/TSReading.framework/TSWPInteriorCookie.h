
@interface TSWPInteriorCookie : NSObject {
    TSWPColumn * _column;
    TSWPShapeLayout * _shapeLayout;
}

@property (nonatomic) TSWPColumn *column;
@property (nonatomic) TSWPShapeLayout *layout;

- (id)column;
- (id)layout;
- (void)setColumn:(id)arg1;
- (void)setLayout:(id)arg1;

@end
