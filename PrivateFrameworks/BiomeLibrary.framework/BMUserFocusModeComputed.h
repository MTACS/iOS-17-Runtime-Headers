
@interface BMUserFocusModeComputed : BMEventBase <BMStoreData, SearchUIBiomeBoolEvent> {
    bool  _hasStarting;
    NSString * _mode;
    NSString * _semanticModeIdentifier;
    int  _semanticType;
    bool  _starting;
    int  _updateReason;
    int  _updateSource;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) NSString *semanticModeIdentifier;
@property (nonatomic, readonly) int semanticType;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int updateReason;
@property (nonatomic, readonly) int updateSource;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMode:(id)arg1 starting:(id)arg2 updateReason:(int)arg3 semanticType:(int)arg4 updateSource:(int)arg5 semanticModeIdentifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)mode;
- (id)semanticModeIdentifier;
- (int)semanticType;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (int)updateReason;
- (int)updateSource;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

- (long long)atx_dndModeSemanticType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;

@end
