
@interface HDIDSDestination : NSObject <NSCopying> {
    id /* block */  _deviceFilterBlock;
}

@property (nonatomic, readonly, copy) id /* block */ deviceFilterBlock;

+ (id)initWithAllowedDeviceTypes:(id)arg1;
+ (id)validHealthSoftwareDeviceTypes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)deviceFilterBlock;
- (id)initWithDeviceFilterBlock:(id /* block */)arg1;

@end
