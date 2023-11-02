
@interface PKExternalDestinationDevice : NSObject <NSSecureCoding> {
    long long  _eligibilityStatus;
    NSString * _identifier;
    NSURL * _imageURL2x;
    NSURL * _imageURL3x;
    NSString * _model;
    NSString * _name;
    NSString * _osType;
    NSString * _serialNumber;
}

@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) long long eligibilityStatus;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSURL *imageURL2x;
@property (nonatomic, retain) NSURL *imageURL3x;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *osType;
@property (nonatomic, retain) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceClass;
- (long long)eligibilityStatus;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageURL2x;
- (id)imageURL3x;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 serialNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToExternalDestinationDevice:(id)arg1;
- (id)model;
- (id)name;
- (id)osType;
- (id)serialNumber;
- (void)setIdentifier:(id)arg1;
- (void)setImageURL2x:(id)arg1;
- (void)setImageURL3x:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsType:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end
