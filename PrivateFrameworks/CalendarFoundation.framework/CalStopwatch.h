
@interface CalStopwatch : NSObject {
    unsigned long long  _elapsedTime;
    NSMutableDictionary * _events;
    bool  _hasValidElapsedTime;
    bool  _isRunning;
    unsigned long long  _lastStartTime;
    bool  _usesSignalFlags;
}

@property bool usesSignalFlags;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)elapsedTimeAsNumber:(int)arg1;
- (id)elapsedTimeAsString:(int)arg1;
- (unsigned long long)elapsedTimeInNanoseconds;
- (id)init;
- (double)markEventEnd:(id)arg1;
- (double)markEventSplit:(id)arg1;
- (void)markEventStart:(id)arg1;
- (void)reset;
- (void)setUsesSignalFlags:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)usesSignalFlags;

@end