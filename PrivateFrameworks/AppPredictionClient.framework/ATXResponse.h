
@interface ATXResponse : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _appClipQueue;
    NSUUID * _blendingModelUICacheUpdateUUID;
    NSData * _cacheFileData;
    NSError * _error;
    NSArray * _predictions;
    NSArray * _proactiveSuggestions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSUUID *blendingModelUICacheUpdateUUID;
@property (nonatomic, readonly) NSData *cacheFileData;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *predictedApps;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSArray *proactiveSuggestions;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingModelUICacheUpdateUUID;
- (id)cacheFileData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAtxSearchResults:(id /* block */)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;
- (id)initWithPredictions:(id)arg1 proactiveSuggestions:(id)arg2 uuid:(id)arg3 cacheFileData:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 error:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResponse:(id)arg1;
- (id)json;
- (id)jsonDescription;
- (id)jsonRawData;
- (id)predictedApps;
- (id)predictions;
- (id)proactiveSuggestions;
- (id)uuid;

@end
