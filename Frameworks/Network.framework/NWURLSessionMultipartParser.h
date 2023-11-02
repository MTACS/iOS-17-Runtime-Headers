
@interface NWURLSessionMultipartParser : NSObject {
    NSString * _boundary;
    unsigned long long  _boundaryPatternSize;
    NWURLSessionMultipartBoundaryRecognizer * _boundaryRecognizer;
    NWURLSessionMultipartPartBoundarySuffixRecognizer * _boundarySuffixRecognizer;
    NSObject<OS_dispatch_data> * _data;
    bool  _didDeliverComplete;
    int  _dispositionState;
    NWURLSessionMultipartHeaderRecognizer * _headerRecognizer;
    NSMutableDictionary * _headers;
    bool  _isFirstBoundary;
    int  _parserState;
    NSMutableArray * _parts;
    NSObject<OS_dispatch_queue> * _queue;
    <NWURLSessionResponseConsumer> * _responseConsumer;
}

- (void).cxx_destruct;

@end
