
@interface VCMediaKeyIndex : NSObject <NSCopying> {
    unsigned char  _MKI;
    unsigned int  _activeSize;
    bool  _isMapped;
    unsigned char  _mapKey;
}

@property (readonly) unsigned int activeSize;

+ (id)makeInvalidKey;
+ (id)newMKIWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;

- (const char *)MKI;
- (unsigned int)activeSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)fullKeyBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)initWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;
- (id)initWithNSUUID:(id)arg1;
- (id)initWithUUID:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStartingWithPrefix:(id)arg1;
- (bool)isValid;
- (unsigned int)mappedKeyBytes:(char *)arg1 size:(unsigned int)arg2;
- (unsigned int)mappedKeySize;
- (void)setActiveSize:(unsigned int)arg1;
- (void)setMapKey:(unsigned char)arg1;
- (bool)setMapping:(unsigned char)arg1;

@end
