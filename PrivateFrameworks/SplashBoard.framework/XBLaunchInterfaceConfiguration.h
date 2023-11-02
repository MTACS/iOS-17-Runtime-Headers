
@interface XBLaunchInterfaceConfiguration : NSObject <BSXPCCoding, NSSecureCoding> {
    NSArray * _bars;
    NSString * _colorName;
    NSString * _imageName;
    bool  _imageRespectsSafeAreaInsets;
    NSString * _navigationBarImageName;
    NSString * _tabBarImageName;
    NSString * _toolbarImageName;
}

@property (nonatomic, readonly) NSArray *bars;
@property (nonatomic, readonly, copy) NSString *colorName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) bool imageRespectsSafeAreaInsets;
@property (nonatomic, readonly, copy) NSString *navigationBarImageName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tabBarImageName;
@property (nonatomic, readonly, copy) NSString *toolbarImageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bars;
- (id)colorName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)imageName;
- (bool)imageRespectsSafeAreaInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)navigationBarImageName;
- (id)tabBarImageName;
- (id)toolbarImageName;

@end
