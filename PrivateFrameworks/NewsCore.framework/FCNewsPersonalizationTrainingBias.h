
@interface FCNewsPersonalizationTrainingBias : NSObject {
    double  _bias;
    NSString * _eventType;
    NSString * _feedType;
    NSString * _groupType;
}

@property (nonatomic) double bias;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) NSString *feedType;
@property (nonatomic, retain) NSString *groupType;
@property (nonatomic, readonly) NSString *identifier;

+ (id)identifierForEventType:(id)arg1 feedType:(id)arg2 groupType:(id)arg3;

- (void).cxx_destruct;
- (double)bias;
- (id)description;
- (id)eventType;
- (id)feedType;
- (id)groupType;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (void)setBias:(double)arg1;
- (void)setEventType:(id)arg1;
- (void)setFeedType:(id)arg1;
- (void)setGroupType:(id)arg1;

@end
