
@interface VIScenenetAnnotation : NSObject <NSCopying> {
    NSArray * _annotations;
    unsigned long long  _revision;
}

@property (nonatomic, readonly, copy) NSArray *annotations;
@property (nonatomic, readonly) unsigned long long revision;

- (void).cxx_destruct;
- (id)annotations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAnnotations:(id)arg1 revision:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)revision;

@end
