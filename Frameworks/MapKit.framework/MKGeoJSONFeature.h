
@interface MKGeoJSONFeature : NSObject <MKGeoJSONObject> {
    NSArray * _geometry;
    NSString * _identifier;
    NSData * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (id)_initWithProperties:(id)arg1 geometry:(id)arg2 identifier:(id)arg3;
- (id)geometry;
- (id)identifier;
- (id)properties;

@end
