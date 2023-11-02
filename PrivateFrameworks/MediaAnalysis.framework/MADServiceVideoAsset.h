
@interface MADServiceVideoAsset : NSObject {
    NSNumber * _animatedStickerScore;
    unsigned long long  _assetType;
    NSString * _clientBundleID;
    NSString * _clientTeamID;
    NSString * _identifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillTime;
    NSURL * _url;
    bool  _userSafetyEligible;
}

@property (nonatomic, readonly) NSNumber *animatedStickerScore;
@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) NSString *clientTeamID;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *isSensitive;
@property (nonatomic, readonly) NSDictionary *scoresForLabels;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillTime;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimTimeRange;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) bool userSafetyEligible;

+ (id)assetWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;
+ (id)assetWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;

- (void).cxx_destruct;
- (id)animatedStickerScore;
- (unsigned long long)assetType;
- (id)clientBundleID;
- (id)clientTeamID;
- (id)identifier;
- (id)initWithClientBundleID:(id)arg1 clientTeamID:(id)arg2;
- (id)isSensitive;
- (id)scoresForLabels;
- (void)setUserSafetyEligible:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimTimeRange;
- (id)url;
- (bool)userSafetyEligible;

@end
