
@interface PXApplicationDisabledIdleTimerToken : NSObject {
    unsigned int  _powerAssertionID;
    NSString * _reason;
}

@property (nonatomic, readonly) unsigned int powerAssertionID;
@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithReason:(id)arg1 powerAssertionID:(unsigned int)arg2;
- (unsigned int)powerAssertionID;
- (id)reason;

@end
