
@interface PESCAPReviewPayload : NSObject {
    long long  _actionType;
    NSString * _adjustmentsDescription;
    NSString * _filename;
    long long  _reason;
    double  _score;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, retain) NSString *adjustmentsDescription;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) double score;

+ (id)legacyPayloadWithReason:(long long)arg1;

- (void).cxx_destruct;
- (long long)actionType;
- (id)adjustmentsDescription;
- (id)debugDescription;
- (id)filename;
- (id)initWithActionType:(long long)arg1 reason:(long long)arg2 score:(double)arg3 adjustmentsDescription:(id)arg4;
- (long long)reason;
- (double)score;
- (void)setAdjustmentsDescription:(id)arg1;
- (void)setFilename:(id)arg1;

@end
