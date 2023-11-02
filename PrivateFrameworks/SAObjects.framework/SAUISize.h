
@interface SAUISize : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long height;
@property (nonatomic) double scale;
@property (readonly) Class superclass;
@property (nonatomic) long long width;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)height;
- (double)scale;
- (void)setHeight:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
