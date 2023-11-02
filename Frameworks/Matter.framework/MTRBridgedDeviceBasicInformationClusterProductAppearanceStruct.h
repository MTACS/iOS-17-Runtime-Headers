
@interface MTRBridgedDeviceBasicInformationClusterProductAppearanceStruct : NSObject <NSCopying> {
    NSNumber * _finish;
    NSNumber * _primaryColor;
}

@property (nonatomic, copy) NSNumber *finish;
@property (nonatomic, copy) NSNumber *primaryColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)finish;
- (id)init;
- (id)primaryColor;
- (void)setFinish:(id)arg1;
- (void)setPrimaryColor:(id)arg1;

@end
