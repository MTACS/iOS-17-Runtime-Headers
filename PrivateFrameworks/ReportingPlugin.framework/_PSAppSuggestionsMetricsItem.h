
@interface _PSAppSuggestionsMetricsItem : NSObject {
    void model;
    void rank;
    void transportBundleId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) unsigned char rank;
@property (nonatomic, readonly) NSString *transportBundleId;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithTransportBundleId:(id)arg1 model:(id)arg2 rank:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (id)model;
- (unsigned char)rank;
- (id)transportBundleId;

@end
