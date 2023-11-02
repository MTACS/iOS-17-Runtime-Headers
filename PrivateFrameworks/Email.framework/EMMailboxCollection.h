
@interface EMMailboxCollection : EMCollection <NSSecureCoding>

@property (nonatomic, readonly) EMMailboxRepository *repository;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 topLevelOnly:(bool)arg2;
- (id)initWithAccount:(id)arg1 topLevelOnly:(bool)arg2 repository:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailbox:(id)arg1 repository:(id)arg2;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (id)repository;
- (void)setRepository:(id)arg1;

@end
