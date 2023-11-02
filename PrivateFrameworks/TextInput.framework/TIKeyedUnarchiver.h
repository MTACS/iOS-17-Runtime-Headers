
@interface TIKeyedUnarchiver : NSKeyedUnarchiver <TICoding> {
    unsigned long long  tiVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tiVersion;

- (void)setTiVersion:(unsigned long long)arg1;
- (unsigned long long)tiVersion;

@end
