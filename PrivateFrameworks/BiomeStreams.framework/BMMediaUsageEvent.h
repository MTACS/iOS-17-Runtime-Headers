
@interface BMMediaUsageEvent : BMEventBase <BMEventAppAssociating, BMEventBinaryStepping, BMEventTimeElapsing> {
    NSURL * _URL;
    NSURL * _mediaURL;
    NSString * _safariProfileID;
    bool  _usageTrusted;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *mediaURL;
@property (nonatomic, copy) NSString *safariProfileID;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;
@property (getter=isUsageTrusted, nonatomic) bool usageTrusted;

+ (id)new;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)init;
- (id)initWithBegin:(bool)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 timestamp:(id)arg5;
- (id)initWithBegin:(bool)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 usageTrusted:(bool)arg5 timestamp:(id)arg6;
- (id)initWithBegin:(bool)arg1 bundleID:(id)arg2 URL:(id)arg3 mediaURL:(id)arg4 usageTrusted:(bool)arg5 timestamp:(id)arg6 safariProfileID:(id)arg7;
- (bool)isUsageTrusted;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)mediaURL;
- (id)safariProfileID;
- (void)setMediaURL:(id)arg1;
- (void)setSafariProfileID:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUsageTrusted:(bool)arg1;

@end
