
@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent {
    bool  _didPartiallySucceed;
}

@property bool didPartiallySucceed;
@property (readonly, copy) NSString *resultString;

+ (id)identifier;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (bool)didPartiallySucceed;
- (id)resultString;
- (void)setDidPartiallySucceed:(bool)arg1;

@end
