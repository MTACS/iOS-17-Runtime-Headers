
@interface CryptexRemoteServiceNonceAttr : NSObject {
    unsigned long long  _image_type;
    unsigned long long  _persistence;
}

@property (nonatomic) unsigned long long image_type;
@property (nonatomic) unsigned long long persistence;

- (unsigned long long)getNonceDomainIndex;
- (unsigned long long)image_type;
- (id)init;
- (unsigned long long)persistence;
- (void)setImage_type:(unsigned long long)arg1;
- (void)setPersistence:(unsigned long long)arg1;

@end
