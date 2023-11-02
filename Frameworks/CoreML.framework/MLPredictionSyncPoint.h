
@interface MLPredictionSyncPoint : NSObject {
    <MTLSharedEvent> * _sharedEvent;
    unsigned long long  _value;
}

@property (nonatomic, readonly) <MTLSharedEvent> *sharedEvent;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (id)initWithSharedEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)notify;
- (id)sharedEvent;
- (unsigned long long)value;

@end
