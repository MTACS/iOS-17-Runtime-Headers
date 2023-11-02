
@interface _NS128bitWrapper : NSObject <NSCopying> {
    struct _double_quad_uint { 
        unsigned long long high64; 
        unsigned long long low64; 
    }  bits;
}

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
