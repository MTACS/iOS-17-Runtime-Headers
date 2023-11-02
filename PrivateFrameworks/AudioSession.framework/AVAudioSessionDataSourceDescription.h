
@interface AVAudioSessionDataSourceDescription : NSObject {
    void * _impl;
}

@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSString *preferredPolarPattern;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSArray *supportedPolarPatterns;

+ (id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned int)arg3;

- (void)configurePolarPatterns:(id)arg1;
- (id)dataSourceID;
- (id)dataSourceName;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned int)arg3;
- (id)initWithSessionID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDataSource:(id)arg1;
- (id)location;
- (id)orientation;
- (id)preferredPolarPattern;
- (struct DataSourceDescriptionImpl { unsigned int x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; }*)privateGetImplementation;
- (id)privateGetOwningPortID;
- (id)selectedPolarPattern;
- (bool)setPreferredPolarPattern:(id)arg1 error:(id*)arg2;
- (id)supportedPolarPatterns;

@end
