
@interface NWURLSessionMultipartBoundaryRecognizer : NSObject {
    unsigned long long  _end;
    NSString * _pattern;
    char * _rollbackBuffer;
    unsigned long long  _rollbackBufferCapacity;
    unsigned long long  _start;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
