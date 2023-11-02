
@interface APOdmlBiomeEvent : NSObject <BMStoreData> {
    NSMutableDictionary * _outerDictionary;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) NSMutableDictionary *outerDictionary;
@property (readonly) Class superclass;

+ (id)_customClassesForDataDict;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)dictionary;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 andIdentifier:(id)arg2;
- (id)json;
- (id)jsonDict;
- (id)outerDictionary;
- (id)serialize;
- (void)setOuterDictionary:(id)arg1;

@end
