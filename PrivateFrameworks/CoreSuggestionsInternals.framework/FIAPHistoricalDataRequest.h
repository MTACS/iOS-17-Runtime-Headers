
@interface FIAPHistoricalDataRequest : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    NSString * _personHandle;
    NSString * _pluginIdentifier;
    unsigned long long  _requestId;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *personHandle;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) unsigned long long requestId;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)historicalDataRequestWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_dateRangeIsSubsetOfHistoricalDataRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithRequestId:(unsigned long long)arg1 pluginIdentifier:(id)arg2 personHandle:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHistoricalDataRequest:(id)arg1;
- (id)personHandle;
- (id)pluginIdentifier;
- (unsigned long long)requestId;
- (void)setPluginIdentifier:(id)arg1;
- (void)setRequestId:(unsigned long long)arg1;
- (id)startDate;
- (bool)subsetOfHistoricalDataRequest:(id)arg1;

@end
