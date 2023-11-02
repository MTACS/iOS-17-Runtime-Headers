
@interface PFHEVCProfileInformation : NSObject {
    NSNumber * _level;
    NSNumber * _profile;
    NSNumber * _tier;
}

@property (retain) NSNumber *level;
@property (retain) NSNumber *profile;
@property (readonly) NSString *summaryDescription;
@property (retain) NSNumber *tier;

- (void).cxx_destruct;
- (id)level;
- (id)profile;
- (void)setLevel:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setTier:(id)arg1;
- (id)summaryDescription;
- (id)tier;

@end
