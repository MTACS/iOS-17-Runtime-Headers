
@protocol SSDataCollectible <NSObject>

@required

- (NSString *)dataCollectionBundle;
- (bool)serializeToJSON:(void*)arg1 valuesOnly:(bool)arg2;

@end
