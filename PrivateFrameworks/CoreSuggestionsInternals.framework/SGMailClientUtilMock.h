
@interface SGMailClientUtilMock : NSObject {
    EAEmailAddressSet * _vips;
}

@property (nonatomic, retain) EAEmailAddressSet *vips;

- (void).cxx_destruct;
- (id)allVIPEmailAddresses;
- (id)init;
- (void)setVips:(id)arg1;
- (id)vips;

@end
