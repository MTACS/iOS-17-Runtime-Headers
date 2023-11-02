
@interface GEOAPURLSessionConfig : NSObject {
    bool  _discretionary;
    int  _noCellAuthType;
    bool  _requirePower;
    bool  _requireWifi;
    int  _type;
}

@property (nonatomic) bool discretionary;
@property (nonatomic) int noCellAuthType;
@property (nonatomic) bool requirePower;
@property (nonatomic) bool requireWifi;
@property (nonatomic) int type;

+ (id)allSessionConfigTypes;
+ (id)configForURLSessionConfigType:(int)arg1;

- (bool)discretionary;
- (int)noCellAuthType;
- (bool)requirePower;
- (bool)requireWifi;
- (void)setDiscretionary:(bool)arg1;
- (void)setNoCellAuthType:(int)arg1;
- (void)setRequirePower:(bool)arg1;
- (void)setRequireWifi:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
