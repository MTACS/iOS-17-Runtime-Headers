
@interface WANWActivityStatistics : NSObject {
    NSArray * _activityUUIDs;
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSArray * _externallyVisibleActivityUUIDs;
    bool  _fromInitWithPBCodableData;
    _TtC13WiFiAnalytics21WANWActivityTransform * _obj;
}

@property (retain) NSArray *activityUUIDs;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (retain) NSArray *externallyVisibleActivityUUIDs;
@property (nonatomic, retain) _TtC13WiFiAnalytics21WANWActivityTransform *obj;

- (void).cxx_destruct;
- (id)activityUUIDs;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (id)expandKeyNameLengths:(id)arg1;
- (id)externallyVisibleActivityUUIDs;
- (id)getTransformedFlattened:(int)arg1;
- (id)getTransformedFlattenedFrom:(id)arg1 style:(int)arg2;
- (id)getTransformedFlattenedFrom:(id)arg1 style:(int)arg2 index:(unsigned int)arg3;
- (id)initWithPBCodableData:(id)arg1;
- (id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2;
- (id)obj;
- (void)setActivityUUIDs:(id)arg1;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setExternallyVisibleActivityUUIDs:(id)arg1;
- (void)setObj:(id)arg1;

@end
