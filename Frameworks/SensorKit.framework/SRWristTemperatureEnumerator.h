
@interface SRWristTemperatureEnumerator : NSEnumerator {
    HAWristTemperatureEnumerator * _enumerableHAWristTemperature;
}

+ (id)new;

- (id)allObjects;
- (void)dealloc;
- (id)init;
- (id)initWithHAWristTemperatureEnumerator:(id)arg1;
- (id)nextObject;

@end
