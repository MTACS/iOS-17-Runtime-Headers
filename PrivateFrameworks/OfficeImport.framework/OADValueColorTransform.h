
@interface OADValueColorTransform : OADColorTransform {
    float  mValue;
}

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
