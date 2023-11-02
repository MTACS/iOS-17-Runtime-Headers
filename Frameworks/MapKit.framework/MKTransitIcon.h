
@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {
    unsigned int  _cartoID;
    unsigned int  _defaultTransitType;
    unsigned int  _iconAttributeKey;
    unsigned int  _iconAttributeValue;
    GEOStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) unsigned int cartoID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)cartoID;
- (unsigned int)defaultTransitType;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (int)iconType;
- (id)initWithCartoId:(unsigned int)arg1 defaultTransitType:(unsigned int)arg2;
- (id)initWithKey:(unsigned int)arg1 value:(unsigned int)arg2;
- (id)styleAttributes;

@end
