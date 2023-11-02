
@interface SBFPhysicalButtonTarget : NSObject <NSCopying> {
    unsigned long long  _button;
    unsigned long long  _generation;
    unsigned long long  _identifier;
}

@property (nonatomic, readonly) unsigned long long button;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) unsigned long long identifier;

+ (id)targetWithPhysicalButton:(unsigned long long)arg1 generation:(unsigned long long)arg2;
+ (id)targetWithPhysicalButton:(unsigned long long)arg1 generation:(unsigned long long)arg2 identifier:(unsigned long long)arg3;

- (unsigned long long)button;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (bool)isEqual:(id)arg1;

@end
