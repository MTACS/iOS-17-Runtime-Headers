
@interface TPSDeviceCapability : TPSCapability {
    long long  _type;
}

@property (nonatomic) long long type;

- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
