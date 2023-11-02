
@interface PXPhotosDetailsVisualLookupData : NSObject {
    NSString * _displayMessage;
    NSString * _glyphImageName;
    NSString * _visualDomain;
}

@property (nonatomic, copy) NSString *displayMessage;
@property (nonatomic, copy) NSString *glyphImageName;
@property (nonatomic, copy) NSString *visualDomain;

- (void).cxx_destruct;
- (bool)_isEqualToVisualLookupData:(id)arg1;
- (id)description;
- (id)displayMessage;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGlyphName:(id)arg1 visualDomain:(id)arg2 displayMessage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDisplayMessage:(id)arg1;
- (void)setGlyphImageName:(id)arg1;
- (void)setVisualDomain:(id)arg1;
- (id)visualDomain;

@end
