
@interface SASVTokenData : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endTimeMillis;
@property (readonly) unsigned long long hash;
@property (nonatomic) float score;
@property (nonatomic, copy) NSNumber *startTimeMillis;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)tokenData;
+ (id)tokenDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endTimeMillis;
- (id)groupIdentifier;
- (float)score;
- (void)setEndTimeMillis:(id)arg1;
- (void)setScore:(float)arg1;
- (void)setStartTimeMillis:(id)arg1;
- (void)setText:(id)arg1;
- (id)startTimeMillis;
- (id)text;

@end
