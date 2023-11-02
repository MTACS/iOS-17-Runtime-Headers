
@interface SBShutdownContext : NSObject <NSCopying> {
    bool  _fromUserPowerDown;
    NSString * _reason;
}

@property (nonatomic) bool fromUserPowerDown;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)fromUserPowerDown;
- (id)initWithReason:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (void)setFromUserPowerDown:(bool)arg1;

@end
