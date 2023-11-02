
@interface LPEvent : NSObject {
    NSURL * _URL;
    NSMutableArray * _children;
    double  _endTime;
    LPEvent * _parent;
    unsigned long long  _specialization;
    double  _startTime;
    long long  _status;
    NSString * _subtitle;
    long long  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) LPEvent *parent;
@property (nonatomic) unsigned long long specialization;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)URL;
- (bool)_childrenAreComplete;
- (id)childWithType:(long long)arg1 subtitle:(id)arg2;
- (id)children;
- (void)didCompleteWithErrorCode:(long long)arg1;
- (void)didCompleteWithStatus:(long long)arg1;
- (double)duration;
- (double)endTime;
- (id)init;
- (id)initWithType:(long long)arg1 subtitle:(id)arg2;
- (bool)isComplete;
- (id)parent;
- (void)setSpecialization:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (unsigned long long)specialization;
- (double)startTime;
- (long long)status;
- (id)subtitle;
- (long long)type;

@end
