
@interface PXGBlurEffectViewConfiguration : NSObject <PXGViewUserData> {
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)style;

@end
