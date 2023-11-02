
@interface PKPaginatedWebServiceResponse : PKWebServiceResponse {
    NSDate * _lastUpdated;
    bool  _moreComing;
    NSArray * _rawDataList;
}

@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) bool moreComing;
@property (nonatomic, readonly) NSArray *rawDataList;

+ (id)responseWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;
- (bool)moreComing;
- (id)rawDataList;

@end
