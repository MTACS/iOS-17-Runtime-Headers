
@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback <_CPStartFeedback> {
    unsigned long long  _compressedRequestSize;
    unsigned long long  _endpoint;
    NSString * _experimentId;
    NSDictionary * _headers;
    SFIndexState * _indexState;
    unsigned long long  _rawRequestSize;
    NSString * _treatmentId;
    NSString * _url;
}

@property (nonatomic) unsigned long long compressedRequestSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endpoint;
@property (nonatomic, readonly) int endpointType;
@property (nonatomic, copy) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, retain) SFIndexState *indexState;
@property (nonatomic) unsigned long long rawRequestSize;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, readonly, copy) NSString *uuid;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)compressedRequestSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endpoint;
- (id)experimentId;
- (id)headers;
- (id)indexState;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 experimentId:(id)arg7 treatmentId:(id)arg8;
- (unsigned long long)rawRequestSize;
- (void)setCompressedRequestSize:(unsigned long long)arg1;
- (void)setEndpoint:(unsigned long long)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setIndexState:(id)arg1;
- (void)setRawRequestSize:(unsigned long long)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)treatmentId;
- (id)url;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)endpointType;

@end
