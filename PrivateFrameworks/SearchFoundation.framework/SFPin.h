
@interface SFPin : NSObject <NSCopying, NSSecureCoding, SFPin> {
    struct { 
        unsigned int pinBehavior : 1; 
    }  _has;
    NSString * _label;
    SFLatLng * _location;
    NSData * _mapsData;
    int  _pinBehavior;
    SFColor * _pinColor;
    NSString * _pinText;
    NSString * _resultID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic) int pinBehavior;
@property (nonatomic, retain) SFColor *pinColor;
@property (nonatomic, copy) NSString *pinText;
@property (nonatomic, copy) NSString *resultID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPinBehavior;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (id)location;
- (id)mapsData;
- (int)pinBehavior;
- (id)pinColor;
- (id)pinText;
- (id)resultID;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setPinBehavior:(int)arg1;
- (void)setPinColor:(id)arg1;
- (void)setPinText:(id)arg1;
- (void)setResultID:(id)arg1;

@end
