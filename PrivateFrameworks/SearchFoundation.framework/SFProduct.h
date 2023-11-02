
@interface SFProduct : NSObject <NSCopying, NSSecureCoding, SFProduct> {
    NSURL * _availabilityURL;
    bool  _buyable;
    NSString * _displayName;
    struct { 
        unsigned int buyable : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _productIdentifier;
}

@property (nonatomic, copy) NSURL *availabilityURL;
@property (nonatomic) bool buyable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availabilityURL;
- (bool)buyable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBuyable;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productIdentifier;
- (void)setAvailabilityURL:(id)arg1;
- (void)setBuyable:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;

@end
