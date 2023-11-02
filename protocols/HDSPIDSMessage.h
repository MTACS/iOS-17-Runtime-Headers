
@protocol HDSPIDSMessage <HKSPDictionarySerializable>

@required

- (unsigned long long)destinations;
- (NSString *)identifier;

@end
