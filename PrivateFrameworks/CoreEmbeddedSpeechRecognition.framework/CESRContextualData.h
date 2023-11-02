
@interface CESRContextualData : NSObject {
    NSString * _applicationName;
    _EARContextualData * _contextualData;
    NSString * _taskName;
}

@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) _EARContextualData *contextualData;
@property (nonatomic, readonly) NSString *taskName;

- (void).cxx_destruct;
- (id)applicationName;
- (bool)containsEntity;
- (id)contextualData;
- (void)fetchNamedEntitiesWithTimeInterval:(double)arg1;
- (id)initWithConfiguration:(id)arg1 taskName:(id)arg2 applicationName:(id)arg3;
- (id)metrics;
- (id)taskName;

@end
