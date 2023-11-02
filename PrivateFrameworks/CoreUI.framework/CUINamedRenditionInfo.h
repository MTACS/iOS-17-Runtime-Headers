
@interface CUINamedRenditionInfo : NSObject <NSCopying> {
    void * _bitmap;
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyFormat;
    long long  _platform;
}

+ (int)subtypeFromIndexWithPlatform:(long long)arg1 andIndex:(unsigned short)arg2;
+ (int)subtypeToIndexWithPlatform:(long long)arg1 andInput:(unsigned short)arg2;

- (id)archivedData;
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (id)bitwiseAndWith:(id)arg1;
- (id)bitwiseOrWith:(id)arg1 forAttribute:(int)arg2;
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;
- (bool)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;
- (bool)contentPresentForAttribute:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)decrementValue:(long long*)arg1 forAttribute:(int)arg2;
- (id)description;
- (bool)diverseContentPresentForAttribute:(int)arg1;
- (unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2;
- (unsigned short)getValueOfAttribute:(int)arg1;
- (void)incrementIndex:(unsigned long long*)arg1 inValues:(id)arg2 forAttribute:(int)arg3;
- (id)initWithData:(id)arg1 keyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2 andPlatform:(long long)arg3;
- (id)initWithKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1 andPlatform:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedRenditionInfo:(id)arg1;
- (unsigned long long)numberOfBitsSet;
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;

@end
