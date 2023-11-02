
@interface ANHomeContext : NSObject <NSSecureCoding> {
    NSString * _homeName;
    bool  _isEmpty;
    NSArray * _roomNames;
    NSArray * _zoneNames;
}

@property (nonatomic, retain) NSString *homeName;
@property (nonatomic) bool isEmpty;
@property (nonatomic, retain) NSArray *roomNames;
@property (nonatomic, retain) NSArray *zoneNames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)roomNames;
- (void)setHomeName:(id)arg1;
- (void)setIsEmpty:(bool)arg1;
- (void)setRoomNames:(id)arg1;
- (void)setZoneNames:(id)arg1;
- (id)zoneNames;

@end
