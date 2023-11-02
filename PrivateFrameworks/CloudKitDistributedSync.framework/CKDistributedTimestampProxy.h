
@interface CKDistributedTimestampProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (nonatomic, readonly) unsigned long long size;

- (unsigned long long)clock;
- (void)copySiteIdentifierBytes:(void*)arg1 length:(unsigned long long*)arg2 isNull:(bool*)arg3;
- (id)distributedSiteIdentifier;
- (unsigned char)modifier;
- (id)siteIdentifier;
- (unsigned long long)siteIdentifierSize;
- (unsigned long long)size;
- (id)timestamp;
- (bool)unordered;

@end
