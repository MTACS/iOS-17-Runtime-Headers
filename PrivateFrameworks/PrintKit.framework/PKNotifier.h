
@interface PKNotifier : NSObject {
    PKNotification * _outstandingNote;
    struct __CFUserNotification { } * _outstandingRef;
    struct __CFRunLoopSource { } * _outstandingSource;
}

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (void)cancelNotification:(id)arg1;
- (id)init;
- (id)makeAuthAlert:(id)arg1 challenge:(id)arg2;
- (id)makeNotice:(id)arg1 message:(id)arg2;
- (id)makeQuotaAlert:(id)arg1 message:(id)arg2 quotaURL:(id)arg3;
- (id)makeRetry:(id)arg1 message:(id)arg2;
- (id)makeSimpleAlert:(id)arg1 message:(id)arg2;
- (void)notification:(struct __CFUserNotification { }*)arg1 completedWithResult:(unsigned long long)arg2;
- (void)startNotification:(id)arg1 options:(unsigned long long)arg2 dict:(id)arg3;

@end
