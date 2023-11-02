
@interface BMDisplayAppearance : BMEventBase <BMStoreData, SearchUIBiomeBoolEvent> {
    int  _reason;
    int  _state;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int reason;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithState:(int)arg1 reason:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)reason;
- (id)serialize;
- (int)state;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (void)getEnabledStatusWithCompletion:(id /* block */)arg1;

@end
