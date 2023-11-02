
@interface HMDAnalyticsCharacteristicThresholdEventData : HMFObject {
    bool  _maxPresent;
    bool  _minPresent;
}

@property bool maxPresent;
@property bool minPresent;

- (bool)maxPresent;
- (bool)minPresent;
- (void)setMaxPresent:(bool)arg1;
- (void)setMinPresent:(bool)arg1;

@end
