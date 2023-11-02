
@interface STRecoveryEmailMismatchCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _isRecoveryEmailMismatched;
}

@property (readonly, copy) NSString *description;
@property (readonly) bool isRecoveryEmailMismatched;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (id)initWithRecoveryEmailMismatched:(bool)arg1;
- (bool)isRecoveryEmailMismatched;
- (id)name;
- (id)payload;

@end
