
@protocol TSPComponentParserDelegate <NSObject>

@required

- (bool)componentParser:(TSPComponentParser *)arg1 didReadArchiveInfo:(const void*)arg2 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; unsigned long long x4; id x5; unsigned long long x6; char *x7; }*)arg3 error:(id*)arg4;

@end
