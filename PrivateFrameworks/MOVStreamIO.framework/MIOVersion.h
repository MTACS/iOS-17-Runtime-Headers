
@interface MIOVersion : NSObject <NSCopying> {
    unsigned int  _bugfix;
    unsigned int  _major;
    unsigned int  _minor;
    NSString * _modifier;
}

@property (readonly) unsigned int bugfix;
@property (readonly) unsigned int major;
@property (readonly) unsigned int minor;
@property (readonly) NSString *modifier;

+ (id)allVersionedKeysForKey:(id)arg1 modifier:(id)arg2;
+ (id)pre3_15_0_Mapping;
+ (id)versionZero;

- (void).cxx_destruct;
- (unsigned int)bugfix;
- (long long)compareToVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)getVersionAsString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVersionString:(id)arg1 error:(id*)arg2;
- (bool)isAllDigitsInString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVersion:(id)arg1;
- (unsigned int)major;
- (unsigned int)minor;
- (id)modifier;
- (id)versionedKey:(id)arg1 modifier:(id)arg2;

@end
