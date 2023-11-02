
@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (nonatomic, readonly) unsigned long long size;

- (id)location;
- (id)reference;
- (unsigned long long)size;
- (id)timestamp;
- (unsigned char)type;

@end
