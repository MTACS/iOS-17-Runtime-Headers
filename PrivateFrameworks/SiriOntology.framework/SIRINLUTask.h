
@interface SIRINLUTask : NSObject <NSSecureCoding> {
    double  _score;
    USOSerializedGraph * _task;
}

@property (nonatomic) double score;
@property (nonatomic, retain) USOSerializedGraph *task;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTask:(id)arg1 score:(double)arg2;
- (double)score;
- (void)setScore:(double)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
