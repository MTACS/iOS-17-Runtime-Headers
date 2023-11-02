
@interface _TtCC7Message28BackFillMessageBodyScheduler7Request : NSObject <MFBackFillingMessageBodyDownloadRequest> {
    void activity;
    void activityID;
    void id;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool shouldDefer;

- (void).cxx_destruct;
- (void)completeWithStatus:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)shouldDefer;

@end
