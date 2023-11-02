
@interface DebugHierarchyRequest : NSObject {
    NSArray * _actions;
    id /* block */  _completion;
    bool  _compressDuringTransport;
    DebugHierarchyCrawlerOptions * _crawlerOptions;
    NSDate * _executionEndDate;
    NSDate * _executionStartDate;
    DebugHierarchyRequestFailureReason * _failureReason;
    NSString * _identifier;
    float  _initiatorVersion;
    NSArray * _logs;
    NSString * _name;
    bool  _needsCompatibilityConversion;
    long long  _objectDiscovery;
    NSDictionary * _payload;
    long long  _priority;
    id /* block */  _progressHandler;
    NSData * _rawResponseData;
    NSData * _serializedCompatibilitySupportRepresentation;
    long long  _status;
    NSString * _statusMessageActivityPhrase;
    double  _timeout;
    bool  _wantsUserFacingStatusUpdates;
}

@property (retain) NSArray *actions;
@property (readonly) NSString *base64Encoded;
@property (copy) id /* block */ completion;
@property bool compressDuringTransport;
@property (retain) DebugHierarchyCrawlerOptions *crawlerOptions;
@property (retain) NSDate *executionEndDate;
@property (retain) NSDate *executionStartDate;
@property (retain) DebugHierarchyRequestFailureReason *failureReason;
@property (retain) NSString *identifier;
@property float initiatorVersion;
@property (retain) NSArray *logs;
@property (retain) NSString *name;
@property bool needsCompatibilityConversion;
@property (readonly) long long objectDiscovery;
@property (readonly) NSDictionary *payload;
@property (readonly) long long priority;
@property (copy) id /* block */ progressHandler;
@property (retain) NSData *rawResponseData;
@property (retain) NSData *serializedCompatibilitySupportRepresentation;
@property long long status;
@property (retain) NSString *statusMessageActivityPhrase;
@property double timeout;
@property bool wantsUserFacingStatusUpdates;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

+ (id)_compatibleRequestWithDictionary:(id)arg1;
+ (id)_requestWithV1RequestDictionary:(id)arg1;
+ (id)requestWithBase64Data:(id)arg1 error:(id*)arg2;
+ (id)requestWithDictionary:(id)arg1;
+ (id)requestWithDiscoveryType:(long long)arg1 actions:(id)arg2 completion:(id /* block */)arg3;
+ (id)requestWithName:(id)arg1 discoveryType:(long long)arg2 actions:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)actions;
- (void)addLogEntry:(id)arg1;
- (id)base64Encoded;
- (void)cancel;
- (id /* block */)completion;
- (bool)compressDuringTransport;
- (id)crawlerOptions;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)executionEndDate;
- (id)executionStartDate;
- (id)failureReason;
- (id)formattedResponseDataForRawRequestResultData:(id)arg1;
- (id)humanReadableStatusMessage;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithWithDiscoveryType:(long long)arg1 actions:(id)arg2 completion:(id /* block */)arg3;
- (float)initiatorVersion;
- (bool)isEqual:(id)arg1;
- (id)logs;
- (id)name;
- (bool)needsCompatibilityConversion;
- (long long)objectDiscovery;
- (id)payload;
- (long long)priority;
- (id /* block */)progressHandler;
- (id)rawResponseData;
- (id)serializedCompatibilitySupportRepresentation;
- (void)setActions:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCompressDuringTransport:(bool)arg1;
- (void)setCrawlerOptions:(id)arg1;
- (void)setExecutionEndDate:(id)arg1;
- (void)setExecutionStartDate:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitiatorVersion:(float)arg1;
- (void)setLogs:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsCompatibilityConversion:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRawResponseData:(id)arg1;
- (void)setSerializedCompatibilitySupportRepresentation:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setStatusMessageActivityPhrase:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setWantsUserFacingStatusUpdates:(bool)arg1;
- (long long)status;
- (id)statusMessageActivityPhrase;
- (double)timeout;
- (bool)wantsUserFacingStatusUpdates;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyKit.framework/DebugHierarchyKit

- (id)lldbExpressionInPlaceOutError:(id*)arg1;
- (id)lldbExpressionReturningNSDataOutError:(id*)arg1;

@end
