
@interface SARDAceRewriteMessage : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *rewriteType;
@property (nonatomic, copy) NSString *rewrittenUtterance;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rewriteType;
- (id)rewrittenUtterance;
- (void)setRewriteType:(id)arg1;
- (void)setRewrittenUtterance:(id)arg1;

@end
