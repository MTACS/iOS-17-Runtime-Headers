
@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent {
    double  _interval;
}

@property (nonatomic, readonly) double interval;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (double)interval;

@end
