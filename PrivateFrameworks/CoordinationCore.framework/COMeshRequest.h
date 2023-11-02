
@interface COMeshRequest : COMeshCommand {
    NSObject<OS_nw_activity> * _activity;
}

@property (nonatomic, retain) NSObject<OS_nw_activity> *activity;

+ (id)acceptableResponses;

- (void).cxx_destruct;
- (id)activity;
- (double)responseTimeout;
- (void)setActivity:(id)arg1;

@end
