
@interface NWURLSessionMultipartPartBoundarySuffixRecognizer : NSObject {
    char * _buffer;
    unsigned long long  _bytesConsumed;
    unsigned long long  _count;
    int  _nextState;
    bool  _shouldUnget;
}

- (void)dealloc;
- (id)init;

@end
