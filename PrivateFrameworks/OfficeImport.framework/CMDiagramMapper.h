
@interface CMDiagramMapper : CMDrawableMapper {
    ODDDiagram * mDiagram;
    CMDrawingContext * mDrawingContext;
}

+ (int)diagramTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)copyDiagramMapperForId:(id)arg1;
- (id)diagram;
- (id)identifierFromLayoutTypeId:(id)arg1;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)styleMatrix;

@end
