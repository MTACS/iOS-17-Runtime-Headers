
@interface GEOAPSequenceState : NSObject {
    NSMutableArray * _admissionPairs;
    int  _emitType;
    bool  _finished;
    NSString * _name;
    NSMutableArray * _rejectionPairs;
    double  _startTime;
    double  _timeout;
}

- (void).cxx_destruct;

@end
