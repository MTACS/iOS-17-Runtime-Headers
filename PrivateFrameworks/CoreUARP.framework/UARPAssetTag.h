
@interface UARPAssetTag : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _char1;
    BOOL  _char2;
    BOOL  _char3;
    BOOL  _char4;
    unsigned int  _tag;
}

@property (readonly) BOOL char1;
@property (readonly) BOOL char2;
@property (readonly) BOOL char3;
@property (readonly) BOOL char4;
@property (readonly) unsigned int tag;

+ (bool)supportsSecureCoding;

- (BOOL)char1;
- (BOOL)char2;
- (BOOL)char3;
- (BOOL)char4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)decodeCharForKey:(id)arg1 key:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithChar1:(BOOL)arg1 char2:(BOOL)arg2 char3:(BOOL)arg3 char4:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)tag;

@end
