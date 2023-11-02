
@interface _SBWindowReference : NSObject <NSCopying> {
    id  _object;
}

@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) unsigned long long pointer;

+ (id)referenceForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (unsigned long long)pointer;

@end
