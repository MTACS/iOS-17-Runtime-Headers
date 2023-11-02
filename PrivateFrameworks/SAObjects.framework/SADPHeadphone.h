
@interface SADPHeadphone : SADPDeviceDetail

@property (nonatomic) bool inOrOverEar;
@property (nonatomic, copy) NSString *position;

+ (id)headphone;
+ (id)headphoneWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)inOrOverEar;
- (id)position;
- (void)setInOrOverEar:(bool)arg1;
- (void)setPosition:(id)arg1;

@end
