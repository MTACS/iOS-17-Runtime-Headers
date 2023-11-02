
@interface CLSEventResult : NSObject {
    float  _confidence;
    CLSEvent * _event;
}

@property (nonatomic) float confidence;
@property (nonatomic, retain) CLSEvent *event;

+ (id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2;

- (void).cxx_destruct;
- (float)confidence;
- (id)description;
- (id)event;
- (bool)isSameEventAsResult:(id)arg1;
- (void)mergeWithResult:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setEvent:(id)arg1;

@end
