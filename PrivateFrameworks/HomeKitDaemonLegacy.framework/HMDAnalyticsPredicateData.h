
@interface HMDAnalyticsPredicateData : HMFObject {
    bool  _containsCalendarTime;
    bool  _containsCharacteristicValue;
    bool  _containsSignificantTime;
    bool  _containsSignificantTimeOffset;
    NSMutableArray * _presenceEvents;
}

- (void).cxx_destruct;
- (id)init;

@end
