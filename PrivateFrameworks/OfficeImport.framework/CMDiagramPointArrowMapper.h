
@interface CMDiagramPointArrowMapper : CMDiagramPointMapper {
    int  mArrowType;
}

- (id)getTextBoundsForBounds:(id)arg1;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)transformPresentationName;

@end
