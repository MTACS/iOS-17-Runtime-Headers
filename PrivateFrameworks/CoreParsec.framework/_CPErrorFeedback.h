
@interface _CPErrorFeedback : PBCodable <NSSecureCoding, _CPErrorFeedback, _CPProcessableFeedback> {
    _CPError * _error;
    NSString * _relatedStartNetworkSearchFeedbackId;
    unsigned long long  _timestamp;
    _CPError * _underlyingError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *relatedStartNetworkSearchFeedbackId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) _CPError *underlyingError;

- (void).cxx_destruct;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithError:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedStartNetworkSearchFeedbackId;
- (void)setError:(id)arg1;
- (void)setRelatedStartNetworkSearchFeedbackId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingError:(id)arg1;
- (unsigned long long)timestamp;
- (id)underlyingError;
- (void)writeTo:(id)arg1;

@end
