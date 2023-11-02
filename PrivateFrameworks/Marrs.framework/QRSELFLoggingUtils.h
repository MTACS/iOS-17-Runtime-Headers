
@interface QRSELFLoggingUtils : NSObject

+ (int)convertMarrsErrorCode:(long long)arg1;
+ (int)convertRepetitionType:(int)arg1;
+ (int)convertRewriteType:(int)arg1;
+ (id)convertUUID:(id)arg1;
+ (id)createCCQRContextEvaluatedEvent:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createCCQRContextEvaluatedTier1Event:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createCCQRContextEventWrapper:(id)arg1 withMetaData:(id)arg2;
+ (id)createEventMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3 andWithRequester:(int)arg4;
+ (id)createRDContextEvaluatedEvent:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 withNLXMetadata:(id)arg2;
+ (id)createRDContextEventWrapper:(id)arg1 withMetaData:(id)arg2;
+ (bool)emitCCQREvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 andNLXMetadata:(id)arg2;
+ (bool)emitCCQRFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;
+ (bool)emitCCQRStartedEventWithMetadata:(id)arg1;
+ (void)emitEvent:(id)arg1;
+ (bool)emitQueryRewriteEvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 andNLXMetadata:(id)arg2 byPredictorType:(int)arg3;
+ (bool)emitQueryRewriteFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2 byPredictorType:(int)arg3;
+ (bool)emitQueryRewriteStartedEventWithMetadata:(id)arg1 byPredictorType:(int)arg2;
+ (bool)emitRDEvaluatedEventWithResponse:(struct QRResponse { struct vector<marrs::qr::orchestration::QRHypothesis, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_1_1_1; struct QRHypothesis {} *x_1_1_2; struct __compressed_pair<marrs::qr::orchestration::QRHypothesis *, std::allocator<marrs::qr::orchestration::QRHypothesis>> { struct QRHypothesis {} *x_3_2_1; } x_1_1_3; } x1; int x2; double x3; double x4; double x5; int x6; })arg1 andNLXMetadata:(id)arg2;
+ (bool)emitRDFailedEventWithMetadata:(id)arg1 andErrorCode:(long long)arg2;
+ (bool)emitRDStartedEventWithMetadata:(id)arg1;

@end
