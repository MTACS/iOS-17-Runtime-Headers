
@interface _UIImageCacheKey : NSObject <NSCopying> {
    NSBundle * _bundle;
    UIImageConfiguration * _configuration;
    struct { 
        unsigned int system : 1; 
        unsigned int private : 1; 
    }  _flags;
    NSString * _name;
}

+ (id)keyWithName:(id)arg1 configuration:(id)arg2;
+ (id)keyWithName:(id)arg1 configuration:(id)arg2 bundle:(id)arg3;
+ (id)keyWithSystemName:(id)arg1 private:(bool)arg2 configuration:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
