
@interface ICQMediaCloudStorage : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayColor;
    NSString * _displayColorDark;
    NSString * _displayLabel;
    NSString * _mediaType;
    NSNumber * _storageUsed;
}

@property (nonatomic, copy) NSString *displayColor;
@property (nonatomic, copy) NSString *displayColorDark;
@property (nonatomic, copy) NSString *displayLabel;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) NSNumber *storageUsed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayColor;
- (id)displayColorDark;
- (id)displayLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaType;
- (void)setDisplayColor:(id)arg1;
- (void)setDisplayColorDark:(id)arg1;
- (void)setDisplayLabel:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setStorageUsed:(id)arg1;
- (id)storageUsed;

@end
