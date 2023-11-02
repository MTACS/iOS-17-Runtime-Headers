
@interface BMEnergyMode : BMEventBase <BMStoreData, SearchUIBiomeBoolEvent> {
    int  _mode;
    int  _reason;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int mode;
@property (nonatomic, readonly) int reason;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMode:(int)arg1 reason:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)mode;
- (int)reason;
- (id)serialize;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;

@end
