
@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (nonatomic, copy) NSString *groupID;

- (id)groupID;
- (id)initWithGroupID:(id)arg1;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (void)setGroupID:(id)arg1;
- (unsigned long long)type;

@end
