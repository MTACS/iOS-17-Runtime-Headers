
@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>

@property (nonatomic, copy) NSString *primaryApplicationDisplayID;
@property (nonatomic, copy) NSString *secondaryApplicationDisplayID;
@property (nonatomic) int status;

+ (bool)supportsSecureCoding;

- (void)setPrimaryApplicationDisplayID:(id)arg1;
- (void)setSecondaryApplicationDisplayID:(id)arg1;
- (void)setStatus:(int)arg1;

@end
