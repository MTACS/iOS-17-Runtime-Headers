
@interface _ANEAnalyticsProcedure : NSObject {
    NSArray * _groupInfo;
    NSString * _identifier;
    NSDictionary * _procedureMetrics;
}

@property (nonatomic, readonly) NSArray *groupInfo;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *procedureMetrics;

+ (id)objectWithGroups:(id)arg1 procedureMetrics:(id)arg2 indentifier:(id)arg3;

- (void).cxx_destruct;
- (id)groupInfo;
- (id)identifier;
- (id)initWithGroups:(id)arg1 procedureMetrics:(id)arg2 indentifier:(id)arg3;
- (id)procedureMetrics;
- (id)serialize;

@end
