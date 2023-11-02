
@interface BMDeviceSilentMode : BMEventBase <BMStoreData, SearchUIBiomeBoolEvent> {
    int  _clientType;
    bool  _hasRaw_untilTime;
    bool  _hasStarting;
    double  _raw_untilTime;
    NSString * _reason;
    bool  _starting;
}

@property (nonatomic, readonly) int clientType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *untilTime;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)clientType;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 clientType:(int)arg2 untilTime:(id)arg3 reason:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)reason;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (id)untilTime;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;

@end
