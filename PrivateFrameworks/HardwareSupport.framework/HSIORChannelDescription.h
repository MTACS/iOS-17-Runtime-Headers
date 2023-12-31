
@interface HSIORChannelDescription : NSObject <NSCopying> {
    NSNumber * _driverIdentifier;
    NSString * _driverName;
    NSString * _groupName;
    NSNumber * _identifier;
    NSString * _name;
    Protocol * _reportingProtocol;
    NSString * _subGroupName;
    NSString * _summary;
}

@property (nonatomic, retain) NSNumber *driverIdentifier;
@property (nonatomic, retain) NSString *driverName;
@property (nonatomic, retain) NSString *groupName;
@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) Protocol *reportingProtocol;
@property (nonatomic, retain) NSString *subGroupName;
@property (nonatomic, retain) NSString *summary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)driverIdentifier;
- (id)driverName;
- (id)groupName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIOReportChannelRef:(struct __CFDictionary { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannelDescription:(id)arg1;
- (id)name;
- (id)reportingProtocol;
- (void)setDriverIdentifier:(id)arg1;
- (void)setDriverName:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReportingProtocol:(id)arg1;
- (void)setSubGroupName:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)subGroupName;
- (id)summary;

@end
