
@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (nonatomic, readonly) unsigned long long size;

- (void)copyIdentifierBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (void)copyModifierBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (id)identifier;
- (unsigned long long)identifierSize;
- (id)modifier;
- (unsigned long long)modifierSize;
- (id)siteIdentifier;
- (unsigned long long)size;

@end
