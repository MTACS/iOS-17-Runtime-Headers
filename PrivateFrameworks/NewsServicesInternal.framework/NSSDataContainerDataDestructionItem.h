
@interface NSSDataContainerDataDestructionItem : NSObject <NSCopying> {
    unsigned long long  _containerClass;
    const char * _identifier;
}

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic) const char *identifier;

- (unsigned long long)containerClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)identifier;
- (id)init;
- (id)initWithContainerClass:(unsigned long long)arg1 identifier:(const char *)arg2;
- (void)setContainerClass:(unsigned long long)arg1;
- (void)setIdentifier:(const char *)arg1;

@end
