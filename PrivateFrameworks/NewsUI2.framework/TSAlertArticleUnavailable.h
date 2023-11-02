
@interface TSAlertArticleUnavailable : NSObject <TSAlertable> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  alert;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBlockedReason:(unsigned long long)arg1;
- (id)initWithType:(long long)arg1;
- (id)message;
- (id)title;

@end
