
@interface HMDAnalyticsLocationEventData : HMFObject {
    bool  _notifyOnEntry;
    bool  _notifyOnExit;
}

@property bool notifyOnEntry;
@property bool notifyOnExit;

- (bool)notifyOnEntry;
- (bool)notifyOnExit;
- (void)setNotifyOnEntry:(bool)arg1;
- (void)setNotifyOnExit:(bool)arg1;

@end
