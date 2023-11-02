
@interface ARUIRingsGeometry : NSObject {
    unsigned int  _circleSegments;
    float  _endingRadian;
    float  _startingRadian;
}

@property (nonatomic) unsigned int circleSegments;
@property (nonatomic) float endingRadian;
@property (nonatomic) float startingRadian;

- (unsigned int)circleSegments;
- (unsigned short*)connectedIndiciesGeometry;
- (unsigned int)disconnectedIndexCount;
- (unsigned short*)disconnectedIndiciesGeometry;
- (float)endingRadian;
- (void)enumerateVertexGeometryWithBlock:(id /* block */)arg1;
- (unsigned int)indexCount;
- (id)init;
- (void)setCircleSegments:(unsigned int)arg1;
- (void)setEndingRadian:(float)arg1;
- (void)setStartingRadian:(float)arg1;
- (float)startingRadian;
- (unsigned int)vertexCount;

@end
