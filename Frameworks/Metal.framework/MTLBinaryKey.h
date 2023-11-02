
@interface MTLBinaryKey : NSObject <NSCopying> {
    struct MTLFunctionId { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; } * _id;
}

@property (readonly) const struct { unsigned char x1[32]; }*value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (const struct MTLFunctionId { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; }*)getFunctionId;
- (unsigned long long)hash;
- (id)initWithHash:(const struct MTLMultiHashKey { struct { unsigned char x_1_1_1[32]; } x1; struct { unsigned char x_2_1_1[32]; } x2[4]; unsigned int x3; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKey:(id)arg1;
- (const struct { unsigned char x1[32]; }*)value;

@end
