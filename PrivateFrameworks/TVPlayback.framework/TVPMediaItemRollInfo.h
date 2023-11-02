
@interface TVPMediaItemRollInfo : NSObject {
    NSNumber * _adamID;
    double  _duration;
    NSString * _dynamicSlotDataSetId;
    bool  _skippable;
    double  _start;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, readonly) double duration;
@property (nonatomic, retain) NSString *dynamicSlotDataSetId;
@property (getter=isSkippable, nonatomic) bool skippable;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_typeDescription;
- (id)adamID;
- (id)description;
- (double)duration;
- (id)dynamicSlotDataSetId;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3;
- (bool)isSkippable;
- (void)setAdamID:(id)arg1;
- (void)setDynamicSlotDataSetId:(id)arg1;
- (void)setSkippable:(bool)arg1;
- (double)start;
- (unsigned long long)type;

@end
