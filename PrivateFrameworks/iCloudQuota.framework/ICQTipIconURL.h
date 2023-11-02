
@interface ICQTipIconURL : ICQTipIcon {
    ICQImageURL * _imageURL;
}

@property (nonatomic, retain) ICQImageURL *imageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (void)setImageURL:(id)arg1;

@end
