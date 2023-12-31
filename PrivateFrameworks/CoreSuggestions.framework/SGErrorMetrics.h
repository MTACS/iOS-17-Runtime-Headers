
@interface SGErrorMetrics : NSObject {
    SGMBadInteractionIgnored * _badInteractionIgnored;
}

@property (nonatomic, retain) SGMBadInteractionIgnored *badInteractionIgnored;

+ (id)instance;
+ (void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_ { unsigned long long x1; })arg1;

- (void).cxx_destruct;
- (id)badInteractionIgnored;
- (id)init;
- (void)setBadInteractionIgnored:(id)arg1;

@end
