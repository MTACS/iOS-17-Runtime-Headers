
@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor {
    unsigned long long  _delayInSeconds;
    NSString * _name;
}

@property (nonatomic) unsigned long long delayInSeconds;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)delayInSeconds;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)initWithEventType:(unsigned long long)arg1 delayInSeconds:(unsigned long long)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setDelayInSeconds:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
