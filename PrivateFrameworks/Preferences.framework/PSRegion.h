
@interface PSRegion : NSObject {
    NSString * _regionCode;
    NSString * _regionName;
}

@property (nonatomic, retain) NSString *regionCode;
@property (nonatomic, retain) NSString *regionName;

+ (id)regionWithName:(id)arg1 code:(id)arg2;

- (void).cxx_destruct;
- (id)regionCode;
- (id)regionName;
- (void)setRegionCode:(id)arg1;
- (void)setRegionName:(id)arg1;

@end
