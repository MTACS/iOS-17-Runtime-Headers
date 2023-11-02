
@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString * __realizedString;
    NSString * _key;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)_isDeallocating;
- (id)_realizedString;
- (bool)_tryRetain;
- (id)autorelease;
- (id)bundle;
- (Class)classForCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)redactedDescription;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)table;

@end
