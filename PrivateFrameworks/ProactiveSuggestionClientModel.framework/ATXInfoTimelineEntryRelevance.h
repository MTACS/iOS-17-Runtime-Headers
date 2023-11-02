
@interface ATXInfoTimelineEntryRelevance : NSObject <NSSecureCoding> {
    double  _duration;
    double  _score;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double score;

+ (id)relevanceWithScore:(double)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithScore:(double)arg1 duration:(double)arg2;
- (double)score;

@end
