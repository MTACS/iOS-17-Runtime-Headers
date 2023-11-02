
@interface RFColor : NSObject <NSCopying, NSSecureCoding, RFColor> {
    RFOptionalFloat * _alpha;
    struct { 
        unsigned int rgb_value : 1; 
        unsigned int name : 1; 
    }  _has;
    int  _name;
    RFRGBValue * _rgb_value;
}

@property (nonatomic, retain) RFOptionalFloat *alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;
@property (nonatomic, retain) RFRGBValue *rgb_value;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasName;
- (bool)hasRgb_value;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)name;
- (id)rgb_value;
- (void)setAlpha:(id)arg1;
- (void)setName:(int)arg1;
- (void)setRgb_value:(id)arg1;

@end
