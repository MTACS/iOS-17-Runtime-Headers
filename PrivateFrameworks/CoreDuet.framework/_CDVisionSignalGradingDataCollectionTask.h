
@interface _CDVisionSignalGradingDataCollectionTask : NSObject {
    NSObject<OS_xpc_object> * _activity;
    VisionSignalGradingVisionGradeEvent * _event;
    NSString * _file;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) VisionSignalGradingVisionGradeEvent *event;
@property (nonatomic, readonly) NSString *file;

- (void).cxx_destruct;
- (id)activity;
- (id)event;
- (id)eventFromDict:(id)arg1;
- (id)eventFromFile:(id)arg1;
- (void)execute;
- (id)file;
- (id)initWithFile:(id)arg1 activity:(id)arg2;
- (void)setEvent:(id)arg1;

@end
