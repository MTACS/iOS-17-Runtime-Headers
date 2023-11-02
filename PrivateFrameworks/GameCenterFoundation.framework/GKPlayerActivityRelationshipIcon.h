
@interface GKPlayerActivityRelationshipIcon : GKInternalRepresentation {
    NSNumber * _height;
    long long  _platform;
    NSString * _url;
    NSNumber * _width;
}

@property (nonatomic) NSNumber *height;
@property (nonatomic) long long platform;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) NSNumber *width;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)height;
- (id)initWithDictionary:(id)arg1;
- (long long)platform;
- (void)setHeight:(id)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)url;
- (id)width;

@end
