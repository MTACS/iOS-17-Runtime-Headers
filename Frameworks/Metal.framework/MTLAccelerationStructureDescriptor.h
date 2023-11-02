
@interface MTLAccelerationStructureDescriptor : NSObject <NSCopying> {
    unsigned long long  _usage;
}

@property (nonatomic) unsigned long long usage;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInstanceDescriptor;
- (void)setUsage:(unsigned long long)arg1;
- (unsigned long long)usage;

@end
