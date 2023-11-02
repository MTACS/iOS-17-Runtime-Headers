
@interface LSiTunesMetadata : NSObject <NSSecureCoding> {
    NSString * _artistName;
    unsigned long long  _betaVersionIdentifier;
    bool  _deviceBasedVPP;
    bool  _gameCenterEnabled;
    bool  _gameCenterEverEnabled;
    NSString * _genre;
    unsigned long long  _genreIdentifier;
    NSString * _itemName;
    bool  _purchasedRedownload;
    NSString * _ratingLabel;
    unsigned long long  _ratingRank;
    NSString * _sourceApp;
    NSString * _storeCohort;
    unsigned long long  _storeFront;
    unsigned long long  _storeItemIdentifier;
    NSArray * _subgenres;
    NSString * _variantID;
    unsigned long long  _versionIdentifier;
}

@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) unsigned long long betaVersionIdentifier;
@property (getter=isDeviceBasedVPP, nonatomic, readonly) bool deviceBasedVPP;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (getter=wasGameCenterEverEnabled, nonatomic, readonly) bool gameCenterEverEnabled;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) unsigned long long genreIdentifier;
@property (nonatomic, readonly) NSString *itemName;
@property (getter=isPurchasedRedownload, nonatomic, readonly) bool purchasedRedownload;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) unsigned long long ratingRank;
@property (nonatomic, readonly) NSString *sourceApp;
@property (nonatomic, readonly) NSString *storeCohort;
@property (nonatomic, readonly) unsigned long long storeFront;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) NSArray *subgenres;
@property (nonatomic, readonly) NSString *variantID;
@property (nonatomic, readonly) unsigned long long versionIdentifier;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg2;
- (id)artistName;
- (unsigned long long)betaVersionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)genre;
- (unsigned long long)genreIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceBasedVPP;
- (bool)isGameCenterEnabled;
- (bool)isPurchasedRedownload;
- (id)itemName;
- (id)ratingLabel;
- (unsigned long long)ratingRank;
- (id)sourceApp;
- (id)storeCohort;
- (id)storeCohortWithError:(id*)arg1;
- (unsigned long long)storeFront;
- (unsigned long long)storeItemIdentifier;
- (id)subgenres;
- (id)variantID;
- (unsigned long long)versionIdentifier;
- (bool)wasGameCenterEverEnabled;

@end
