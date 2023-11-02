
@interface WRSignpostTracker : NSObject {
    int  _count;
    NSMutableArray * _emitsMutable;
    NSMutableDictionary * _environmentMutable;
    NSString * _individuationIdentifier;
    NSMutableArray * _intervalsMutable;
    bool  _isMiddleOfInterval;
    WRSignpost * _signpost;
    long long  _timeUntilFirstSignpostNanoseconds;
    unsigned long long  _totalDurationNanoseconds;
}

@property (readonly) int count;
@property (readonly) NSArray *emits;
@property (readonly) NSDictionary *environment;
@property (readonly) NSString *individuationIdentifier;
@property (readonly) NSArray *intervals;
@property (readonly) WRSignpost *signpost;
@property (readonly) long long timeUntilFirstSignpostNanoseconds;
@property (readonly) unsigned long long totalDurationNanoseconds;

- (void).cxx_destruct;
- (int)count;
- (id)debugDescription;
- (id)emits;
- (id)environment;
- (bool)exceededDiagnosticThreshold;
- (id)individuationIdentifier;
- (id)initWithSignpost:(id)arg1 individuationIdentifier:(id)arg2;
- (id)intervals;
- (id)signpost;
- (long long)timeUntilFirstSignpostNanoseconds;
- (unsigned long long)totalDurationNanoseconds;

@end
