
@interface SGMessageEventDissectorGuardedData : NSObject {
    NSNumber * _currentAllowedMessageCount;
    _PASLazyPurgeableResult * _eventClassifierModel;
    NSDate * _lastWindowStartTime;
}

- (void).cxx_destruct;

@end
