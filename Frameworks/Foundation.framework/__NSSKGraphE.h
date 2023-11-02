
@interface __NSSKGraphE : NSObject {
    unsigned long long  _currE;
    unsigned long long  _dump;
    struct edge { unsigned long long x1; unsigned long long x2[2]; unsigned long long x3; } * _edges;
    unsigned long long  _l_end;
    unsigned long long  _numE;
    unsigned long long  _numV;
    struct vertex { unsigned long long x1; unsigned long long x2; unsigned long long *x3; } * _vertices;
}

- (void)dealloc;

@end
