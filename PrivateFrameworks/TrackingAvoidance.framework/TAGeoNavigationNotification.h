
@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol> {
    NSDate * _date;
    unsigned long long  _navState;
    unsigned long long  _transportType;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long navState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transportType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)navState;
- (unsigned long long)transportType;

@end
