
@protocol MKFApplicationDataPublicExtensions

@required

+ (NSDictionary *)appDataDictionaryForContainer:(id <MKFApplicationDataContainer>)arg1;
+ (<MKFApplicationDataContainer> *)castIfApplicationDataContainer:(id <MKFModel>)arg1;
+ (NSUUID *)modelIDForContainerUUID:(NSUUID *)arg1;
+ (void)setAppDataDictionary:(NSDictionary *)arg1 forContainer:(id <MKFApplicationDataContainer>)arg2;

- (bool)hasValidContainer;

@end
