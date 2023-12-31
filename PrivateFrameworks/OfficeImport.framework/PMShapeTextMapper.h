
@interface PMShapeTextMapper : CMMapper {
    OADOrientedBounds * mBounds;
    bool  mRectangular;
    CMStyle * mStyle;
    OADTextBody * mTextBody;
}

- (void).cxx_destruct;
- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (bool)isTableCellContent;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setRectangular:(bool)arg1;
- (unsigned char)textAnchor;

@end
