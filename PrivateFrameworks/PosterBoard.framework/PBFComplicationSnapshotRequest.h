
@interface PBFComplicationSnapshotRequest : NSObject {
    unsigned long long  _hash;
    CHSWidgetMetrics * _metrics;
    CHSWidget * _widget;
}

@property (nonatomic, readonly) CHSWidgetMetrics *metrics;
@property (nonatomic, readonly) CHSWidget *widget;

+ (id)requestForComplicationLookupInfo:(id)arg1;
+ (id)requestsForPreview:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithWidget:(id)arg1 metrics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metrics;
- (id)widget;

@end
