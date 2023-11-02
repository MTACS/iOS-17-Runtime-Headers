
@interface _INPBSpatialEventTrigger : PBCodable <NSCopying, NSSecureCoding, _INPBSpatialEventTrigger> {
    int  _event;
    struct { 
        unsigned int event : 1; 
        unsigned int mobileSpace : 1; 
    }  _has;
    _INPBLocationValue * _location;
    int  _mobileSpace;
    NSArray * _suggestedValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int event;
@property (nonatomic) bool hasEvent;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMobileSpace;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocationValue *location;
@property (nonatomic) int mobileSpace;
@property (nonatomic, copy) NSArray *suggestedValues;
@property (nonatomic, readonly) unsigned long long suggestedValuesCount;
@property (readonly) Class superclass;

+ (Class)suggestedValuesType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsEvent:(id)arg1;
- (int)StringAsMobileSpace:(id)arg1;
- (void)addSuggestedValues:(id)arg1;
- (void)clearSuggestedValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)event;
- (id)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasLocation;
- (bool)hasMobileSpace;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (int)mobileSpace;
- (id)mobileSpaceAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setHasMobileSpace:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMobileSpace:(int)arg1;
- (void)setSuggestedValues:(id)arg1;
- (id)suggestedValues;
- (id)suggestedValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestedValuesCount;
- (void)writeTo:(id)arg1;

@end
