
@interface TIContinuousPath : NSObject <NSSecureCoding> {
    NSMutableArray * _samples;
}

@property (nonatomic, readonly) NSArray *samples;
@property (nonatomic, readonly) double timeStamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSample:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJsonDictionary:(id)arg1;
- (id)initWithTimeStamp:(double)arg1;
- (id)samples;
- (double)timeStamp;
- (id)toJsonDictionary;

@end
