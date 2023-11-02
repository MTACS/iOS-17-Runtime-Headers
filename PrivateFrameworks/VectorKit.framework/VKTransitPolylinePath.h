
@interface VKTransitPolylinePath : VKPolylinePath {
    unsigned long long  _lineID;
    double  _vertexEqualityTolerance;
}

@property (nonatomic, readonly) double vertexEqualityTolerance;

- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(void*)arg3 pointCount:(unsigned long long)arg4 reversePoints:(bool)arg5 transform:(void*)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(void*)arg3 pointCount:(unsigned long long)arg4 reversePoints:(bool)arg5 transform:(void*)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tileZ:(unsigned int)arg10 vertexPrecision:(unsigned char)arg11;
- (double)vertexEqualityTolerance;

@end
