
@interface RKResponseFeatures : NSObject {
    int  _count;
    double  _normalizedInputMethodCannedCount;
    double  _normalizedInputMethodDictationCount;
    double  _normalizedInputMethodScribbleCount;
    double  _normalizedSourceAppCount;
    double  _normalizedSourceNotificationCount;
    double  _numOfElapsedDays;
    NSString * _response;
    unsigned long long  _responseLength;
    int  _sameRecipientCount;
}

@property (readonly) int count;
@property (readonly) double normalizedInputMethodCannedCount;
@property (readonly) double normalizedInputMethodDictationCount;
@property (readonly) double normalizedInputMethodScribbleCount;
@property (readonly) double normalizedSourceAppCount;
@property (readonly) double normalizedSourceNotificationCount;
@property (readonly) double numOfElapsedDays;
@property (readonly) NSString *response;
@property (readonly) unsigned long long responseLength;
@property (readonly) int sameRecipientCount;

- (void).cxx_destruct;
- (int)count;
- (id)initWithFeatures:(id)arg1 count:(int)arg2 numOfElapsedDays:(double)arg3 sourceAppCount:(double)arg4 sourceNotificationCount:(double)arg5 inputSourceCannedCount:(double)arg6 inputSourceScribbleCount:(double)arg7 inputSourceDictationCount:(double)arg8 responseLength:(unsigned long long)arg9 sameRecipientCount:(int)arg10;
- (double)normalizedInputMethodCannedCount;
- (double)normalizedInputMethodDictationCount;
- (double)normalizedInputMethodScribbleCount;
- (double)normalizedSourceAppCount;
- (double)normalizedSourceNotificationCount;
- (double)numOfElapsedDays;
- (id)response;
- (unsigned long long)responseLength;
- (int)sameRecipientCount;

@end
