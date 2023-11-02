
@interface _TtCO10PodcastsUI6Legacy17JSLocalizerObject : NSObject <_TtP10PodcastsUIP33_B58A2DE32A65E45040B93B81BE0F454517JSLocalizerExport_> {
    void bundle;
    void dateFormatters;
    void dateIntervalFormatters;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  locale;
    void preferredLocalization;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)decimal:(id)arg1 :(long long)arg2 :(long long)arg3;
- (id)duration:(double)arg1;
- (id)duration:(double)arg1 abbreviated:(bool)arg2;
- (id)formatDate:(id)arg1 :(id)arg2;
- (id)formattedCount:(id)arg1;
- (id)friendlyDate:(id)arg1;
- (id)identifier;
- (id)init;
- (id)string:(id)arg1;
- (id)stringWithCount:(id)arg1 :(long long)arg2;
- (id)timeAgo:(id)arg1;
- (id)timeRange:(id)arg1 :(id)arg2 :(id)arg3;
- (id)timeRangeWithFormat:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;

@end
