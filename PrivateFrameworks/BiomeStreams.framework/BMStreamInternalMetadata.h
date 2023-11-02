
@interface BMStreamInternalMetadata : NSObject {
    NSString * _eventName;
    NSString * _fullDescription;
    bool  _publiclyIndexable;
    NSString * _radarComponent;
    NSString * _summary;
}

@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) bool publiclyIndexable;
@property (nonatomic, readonly) NSString *radarComponent;
@property (nonatomic, readonly) NSString *summary;

- (void).cxx_destruct;
- (id)eventName;
- (id)fullDescription;
- (id)init;
- (id)initWithSummary:(id)arg1 description:(id)arg2 eventName:(id)arg3 radarComponent:(id)arg4 publiclyIndexable:(bool)arg5;
- (bool)publiclyIndexable;
- (id)radarComponent;
- (id)summary;

@end
