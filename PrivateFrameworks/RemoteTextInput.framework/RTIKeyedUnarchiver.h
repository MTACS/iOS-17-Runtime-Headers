
@interface RTIKeyedUnarchiver : NSKeyedUnarchiver <RTICoding> {
    unsigned long long  rtiVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long rtiVersion;
@property (readonly) Class superclass;

- (unsigned long long)rtiVersion;
- (void)setRtiVersion:(unsigned long long)arg1;

@end
