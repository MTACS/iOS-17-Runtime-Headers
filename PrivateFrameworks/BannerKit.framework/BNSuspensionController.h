
@interface BNSuspensionController : NSObject {
    NSString * _identifier;
    NSMutableSet * _suspensionReasons;
}

@property (nonatomic, readonly, copy) NSSet *activeSuspensionReasons;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

+ (void)initialize;

- (void).cxx_destruct;
- (id)activeSuspensionReasons;
- (id)identifier;
- (bool)isSuspended;
- (void)setIdentifier:(id)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2;

@end
