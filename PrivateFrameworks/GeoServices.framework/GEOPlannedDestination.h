
@interface GEOPlannedDestination : NSObject <NSSecureCoding> {
    NSDate * _arrivalDate;
    NSDate * _expirationDate;
    NSData * _handle;
    int  _transportType;
}

@property (nonatomic, retain) NSDate *arrivalDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) NSData *handle;
@property (nonatomic) int transportType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)handle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItemHandle:(id)arg1;
- (void)setArrivalDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;

@end
