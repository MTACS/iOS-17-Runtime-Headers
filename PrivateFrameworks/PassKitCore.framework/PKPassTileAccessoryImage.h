
@interface PKPassTileAccessoryImage : PKPassTileAccessory {
    PKPassTileImage * _image;
}

@property (nonatomic, retain) PKPassTileImage *image;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqual:(id)arg1;
- (bool)_setupWithDictionary:(id)arg1;
- (id)createResolvedAccessoryWithBundle:(id)arg1 privateBundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;

@end
