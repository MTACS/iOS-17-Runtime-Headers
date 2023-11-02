
@interface _ANEAnalyticsGroup : NSObject {
    NSNumber * _groupID;
    NSArray * _layerInfo;
    NSArray * _taskInfo;
}

@property (nonatomic, readonly) NSNumber *groupID;
@property (nonatomic, readonly) NSArray *layerInfo;
@property (nonatomic, readonly) NSArray *taskInfo;

+ (id)objectWithID:(id)arg1 layers:(id)arg2 tasks:(id)arg3;

- (void).cxx_destruct;
- (id)groupID;
- (id)initWithID:(id)arg1 layers:(id)arg2 tasks:(id)arg3;
- (id)layerInfo;
- (id)serialize;
- (id)taskInfo;

@end
