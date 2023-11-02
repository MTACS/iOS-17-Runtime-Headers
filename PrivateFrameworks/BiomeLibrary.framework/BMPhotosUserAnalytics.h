
@interface BMPhotosUserAnalytics : BMEventBase <BMStoreData> {
    int  _assetAge;
    bool  _capturedAtAOI;
    bool  _capturedAtBusiness;
    bool  _capturedAtFrequentLocation;
    bool  _capturedAtHome;
    bool  _capturedAtPOI;
    bool  _capturedAtROI;
    bool  _capturedAtWork;
    bool  _capturedOnShortTrip;
    bool  _capturedOnTrip;
    bool  _containsBaby;
    bool  _containsChild;
    bool  _containsCoWorker;
    bool  _containsFamily;
    bool  _containsFriends;
    bool  _containsMyPet;
    bool  _containsParent;
    bool  _containsPartner;
    bool  _containsPets;
    bool  _containsSibling;
    bool  _containsSocialGroup;
    bool  _containsVIP;
    int  _faceCount;
    bool  _hasCapturedAtAOI;
    bool  _hasCapturedAtBusiness;
    bool  _hasCapturedAtFrequentLocation;
    bool  _hasCapturedAtHome;
    bool  _hasCapturedAtPOI;
    bool  _hasCapturedAtROI;
    bool  _hasCapturedAtWork;
    bool  _hasCapturedOnShortTrip;
    bool  _hasCapturedOnTrip;
    bool  _hasContainsBaby;
    bool  _hasContainsChild;
    bool  _hasContainsCoWorker;
    bool  _hasContainsFamily;
    bool  _hasContainsFriends;
    bool  _hasContainsMyPet;
    bool  _hasContainsParent;
    bool  _hasContainsPartner;
    bool  _hasContainsPets;
    bool  _hasContainsSibling;
    bool  _hasContainsSocialGroup;
    bool  _hasContainsVIP;
    bool  _hasFaceCount;
    bool  _hasIsCapturedAtPrivateEvent;
    bool  _hasIsCapturedAtPublicEvent;
    bool  _hasIsCapturedOnHoliday;
    bool  _hasIsCapturedOnWeekend;
    bool  _hasIsContainedInActivity;
    bool  _hasIsContainedInChildActivity;
    bool  _hasIsContainedInOnThisDay;
    bool  _hasIsContainedInSharedAlbum;
    bool  _hasIsContainedInVisualTrend;
    bool  _hasIsCoupon;
    bool  _hasIsDocument;
    bool  _hasIsFavorite;
    bool  _hasIsMeme;
    bool  _hasIsReceipt;
    bool  _hasIsRecentEdit;
    bool  _hasIsRecentFavorite;
    bool  _hasIsRecentShare;
    bool  _hasIsRecentView;
    bool  _hasIsRecipe;
    bool  _hasIsScreenshot;
    bool  _hasUserHasHome;
    bool  _hasUserHasPet;
    bool  _hasUserHasVIP;
    bool  _hasUserNumFavorites;
    bool  _hasUserNumTrips;
    bool  _hasUserNumVIPPeople;
    bool  _hasUserisDAU;
    NSString * _identifier;
    int  _importSource;
    bool  _isCapturedAtPrivateEvent;
    bool  _isCapturedAtPublicEvent;
    bool  _isCapturedOnHoliday;
    bool  _isCapturedOnWeekend;
    bool  _isContainedInActivity;
    bool  _isContainedInChildActivity;
    bool  _isContainedInOnThisDay;
    bool  _isContainedInSharedAlbum;
    bool  _isContainedInVisualTrend;
    bool  _isCoupon;
    bool  _isDocument;
    bool  _isFavorite;
    bool  _isMeme;
    bool  _isReceipt;
    bool  _isRecentEdit;
    bool  _isRecentFavorite;
    bool  _isRecentShare;
    bool  _isRecentView;
    bool  _isRecipe;
    bool  _isScreenshot;
    int  _mediaType;
    NSString * _userEvent;
    bool  _userHasHome;
    bool  _userHasPet;
    bool  _userHasVIP;
    int  _userLibraryAgeInDays;
    int  _userLibrarySize;
    int  _userNumFavorites;
    int  _userNumTrips;
    int  _userNumVIPPeople;
    double  _userisDAU;
}

@property (nonatomic, readonly) int assetAge;
@property (nonatomic, readonly) bool capturedAtAOI;
@property (nonatomic, readonly) bool capturedAtBusiness;
@property (nonatomic, readonly) bool capturedAtFrequentLocation;
@property (nonatomic, readonly) bool capturedAtHome;
@property (nonatomic, readonly) bool capturedAtPOI;
@property (nonatomic, readonly) bool capturedAtROI;
@property (nonatomic, readonly) bool capturedAtWork;
@property (nonatomic, readonly) bool capturedOnShortTrip;
@property (nonatomic, readonly) bool capturedOnTrip;
@property (nonatomic, readonly) bool containsBaby;
@property (nonatomic, readonly) bool containsChild;
@property (nonatomic, readonly) bool containsCoWorker;
@property (nonatomic, readonly) bool containsFamily;
@property (nonatomic, readonly) bool containsFriends;
@property (nonatomic, readonly) bool containsMyPet;
@property (nonatomic, readonly) bool containsParent;
@property (nonatomic, readonly) bool containsPartner;
@property (nonatomic, readonly) bool containsPets;
@property (nonatomic, readonly) bool containsSibling;
@property (nonatomic, readonly) bool containsSocialGroup;
@property (nonatomic, readonly) bool containsVIP;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int faceCount;
@property (nonatomic) bool hasCapturedAtAOI;
@property (nonatomic) bool hasCapturedAtBusiness;
@property (nonatomic) bool hasCapturedAtFrequentLocation;
@property (nonatomic) bool hasCapturedAtHome;
@property (nonatomic) bool hasCapturedAtPOI;
@property (nonatomic) bool hasCapturedAtROI;
@property (nonatomic) bool hasCapturedAtWork;
@property (nonatomic) bool hasCapturedOnShortTrip;
@property (nonatomic) bool hasCapturedOnTrip;
@property (nonatomic) bool hasContainsBaby;
@property (nonatomic) bool hasContainsChild;
@property (nonatomic) bool hasContainsCoWorker;
@property (nonatomic) bool hasContainsFamily;
@property (nonatomic) bool hasContainsFriends;
@property (nonatomic) bool hasContainsMyPet;
@property (nonatomic) bool hasContainsParent;
@property (nonatomic) bool hasContainsPartner;
@property (nonatomic) bool hasContainsPets;
@property (nonatomic) bool hasContainsSibling;
@property (nonatomic) bool hasContainsSocialGroup;
@property (nonatomic) bool hasContainsVIP;
@property (nonatomic) bool hasFaceCount;
@property (nonatomic) bool hasIsCapturedAtPrivateEvent;
@property (nonatomic) bool hasIsCapturedAtPublicEvent;
@property (nonatomic) bool hasIsCapturedOnHoliday;
@property (nonatomic) bool hasIsCapturedOnWeekend;
@property (nonatomic) bool hasIsContainedInActivity;
@property (nonatomic) bool hasIsContainedInChildActivity;
@property (nonatomic) bool hasIsContainedInOnThisDay;
@property (nonatomic) bool hasIsContainedInSharedAlbum;
@property (nonatomic) bool hasIsContainedInVisualTrend;
@property (nonatomic) bool hasIsCoupon;
@property (nonatomic) bool hasIsDocument;
@property (nonatomic) bool hasIsFavorite;
@property (nonatomic) bool hasIsMeme;
@property (nonatomic) bool hasIsReceipt;
@property (nonatomic) bool hasIsRecentEdit;
@property (nonatomic) bool hasIsRecentFavorite;
@property (nonatomic) bool hasIsRecentShare;
@property (nonatomic) bool hasIsRecentView;
@property (nonatomic) bool hasIsRecipe;
@property (nonatomic) bool hasIsScreenshot;
@property (nonatomic) bool hasUserHasHome;
@property (nonatomic) bool hasUserHasPet;
@property (nonatomic) bool hasUserHasVIP;
@property (nonatomic) bool hasUserNumFavorites;
@property (nonatomic) bool hasUserNumTrips;
@property (nonatomic) bool hasUserNumVIPPeople;
@property (nonatomic) bool hasUserisDAU;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) int importSource;
@property (nonatomic, readonly) bool isCapturedAtPrivateEvent;
@property (nonatomic, readonly) bool isCapturedAtPublicEvent;
@property (nonatomic, readonly) bool isCapturedOnHoliday;
@property (nonatomic, readonly) bool isCapturedOnWeekend;
@property (nonatomic, readonly) bool isContainedInActivity;
@property (nonatomic, readonly) bool isContainedInChildActivity;
@property (nonatomic, readonly) bool isContainedInOnThisDay;
@property (nonatomic, readonly) bool isContainedInSharedAlbum;
@property (nonatomic, readonly) bool isContainedInVisualTrend;
@property (nonatomic, readonly) bool isCoupon;
@property (nonatomic, readonly) bool isDocument;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) bool isMeme;
@property (nonatomic, readonly) bool isReceipt;
@property (nonatomic, readonly) bool isRecentEdit;
@property (nonatomic, readonly) bool isRecentFavorite;
@property (nonatomic, readonly) bool isRecentShare;
@property (nonatomic, readonly) bool isRecentView;
@property (nonatomic, readonly) bool isRecipe;
@property (nonatomic, readonly) bool isScreenshot;
@property (nonatomic, readonly) int mediaType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userEvent;
@property (nonatomic, readonly) bool userHasHome;
@property (nonatomic, readonly) bool userHasPet;
@property (nonatomic, readonly) bool userHasVIP;
@property (nonatomic, readonly) int userLibraryAgeInDays;
@property (nonatomic, readonly) int userLibrarySize;
@property (nonatomic, readonly) int userNumFavorites;
@property (nonatomic, readonly) int userNumTrips;
@property (nonatomic, readonly) int userNumVIPPeople;
@property (nonatomic, readonly) double userisDAU;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)assetAge;
- (bool)capturedAtAOI;
- (bool)capturedAtBusiness;
- (bool)capturedAtFrequentLocation;
- (bool)capturedAtHome;
- (bool)capturedAtPOI;
- (bool)capturedAtROI;
- (bool)capturedAtWork;
- (bool)capturedOnShortTrip;
- (bool)capturedOnTrip;
- (bool)containsBaby;
- (bool)containsChild;
- (bool)containsCoWorker;
- (bool)containsFamily;
- (bool)containsFriends;
- (bool)containsMyPet;
- (bool)containsParent;
- (bool)containsPartner;
- (bool)containsPets;
- (bool)containsSibling;
- (bool)containsSocialGroup;
- (bool)containsVIP;
- (unsigned int)dataVersion;
- (id)description;
- (int)faceCount;
- (bool)hasCapturedAtAOI;
- (bool)hasCapturedAtBusiness;
- (bool)hasCapturedAtFrequentLocation;
- (bool)hasCapturedAtHome;
- (bool)hasCapturedAtPOI;
- (bool)hasCapturedAtROI;
- (bool)hasCapturedAtWork;
- (bool)hasCapturedOnShortTrip;
- (bool)hasCapturedOnTrip;
- (bool)hasContainsBaby;
- (bool)hasContainsChild;
- (bool)hasContainsCoWorker;
- (bool)hasContainsFamily;
- (bool)hasContainsFriends;
- (bool)hasContainsMyPet;
- (bool)hasContainsParent;
- (bool)hasContainsPartner;
- (bool)hasContainsPets;
- (bool)hasContainsSibling;
- (bool)hasContainsSocialGroup;
- (bool)hasContainsVIP;
- (bool)hasFaceCount;
- (bool)hasIsCapturedAtPrivateEvent;
- (bool)hasIsCapturedAtPublicEvent;
- (bool)hasIsCapturedOnHoliday;
- (bool)hasIsCapturedOnWeekend;
- (bool)hasIsContainedInActivity;
- (bool)hasIsContainedInChildActivity;
- (bool)hasIsContainedInOnThisDay;
- (bool)hasIsContainedInSharedAlbum;
- (bool)hasIsContainedInVisualTrend;
- (bool)hasIsCoupon;
- (bool)hasIsDocument;
- (bool)hasIsFavorite;
- (bool)hasIsMeme;
- (bool)hasIsReceipt;
- (bool)hasIsRecentEdit;
- (bool)hasIsRecentFavorite;
- (bool)hasIsRecentShare;
- (bool)hasIsRecentView;
- (bool)hasIsRecipe;
- (bool)hasIsScreenshot;
- (bool)hasUserHasHome;
- (bool)hasUserHasPet;
- (bool)hasUserHasVIP;
- (bool)hasUserNumFavorites;
- (bool)hasUserNumTrips;
- (bool)hasUserNumVIPPeople;
- (bool)hasUserisDAU;
- (id)identifier;
- (int)importSource;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userEvent:(id)arg2 containsVIP:(id)arg3 faceCount:(id)arg4 containsPets:(id)arg5 capturedAtHome:(id)arg6 capturedAtWork:(id)arg7 capturedAtFrequentLocation:(id)arg8 capturedOnTrip:(id)arg9 capturedOnShortTrip:(id)arg10 isDocument:(id)arg11 isMeme:(id)arg12 isScreenshot:(id)arg13 isFavorite:(id)arg14 isCapturedOnWeekend:(id)arg15 isCapturedAtPrivateEvent:(id)arg16 isCapturedOnHoliday:(id)arg17 mediaType:(int)arg18 importSource:(int)arg19 assetAge:(int)arg20 userLibrarySize:(int)arg21 userNumTrips:(id)arg22 userNumVIPPeople:(id)arg23 userNumFavorites:(id)arg24 userHasVIP:(id)arg25 userHasHome:(id)arg26 userHasPet:(id)arg27 containsBaby:(id)arg28 containsSocialGroup:(id)arg29 containsMyPet:(id)arg30 containsCoWorker:(id)arg31 containsFamily:(id)arg32 containsFriends:(id)arg33 containsPartner:(id)arg34 containsParent:(id)arg35 containsSibling:(id)arg36 containsChild:(id)arg37 isCoupon:(id)arg38 isRecipe:(id)arg39 isReceipt:(id)arg40 isRecentView:(id)arg41 isRecentEdit:(id)arg42 isRecentShare:(id)arg43 isRecentFavorite:(id)arg44 isContainedInSharedAlbum:(id)arg45 isContainedInOnThisDay:(id)arg46 capturedAtAOI:(id)arg47 capturedAtPOI:(id)arg48 capturedAtROI:(id)arg49 capturedAtBusiness:(id)arg50 isCapturedAtPublicEvent:(id)arg51 isContainedInVisualTrend:(id)arg52 isContainedInActivity:(id)arg53 isContainedInChildActivity:(id)arg54 userLibraryAgeInDays:(int)arg55 userisDAU:(id)arg56;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isCapturedAtPrivateEvent;
- (bool)isCapturedAtPublicEvent;
- (bool)isCapturedOnHoliday;
- (bool)isCapturedOnWeekend;
- (bool)isContainedInActivity;
- (bool)isContainedInChildActivity;
- (bool)isContainedInOnThisDay;
- (bool)isContainedInSharedAlbum;
- (bool)isContainedInVisualTrend;
- (bool)isCoupon;
- (bool)isDocument;
- (bool)isEqual:(id)arg1;
- (bool)isFavorite;
- (bool)isMeme;
- (bool)isReceipt;
- (bool)isRecentEdit;
- (bool)isRecentFavorite;
- (bool)isRecentShare;
- (bool)isRecentView;
- (bool)isRecipe;
- (bool)isScreenshot;
- (id)jsonDictionary;
- (int)mediaType;
- (id)serialize;
- (void)setHasCapturedAtAOI:(bool)arg1;
- (void)setHasCapturedAtBusiness:(bool)arg1;
- (void)setHasCapturedAtFrequentLocation:(bool)arg1;
- (void)setHasCapturedAtHome:(bool)arg1;
- (void)setHasCapturedAtPOI:(bool)arg1;
- (void)setHasCapturedAtROI:(bool)arg1;
- (void)setHasCapturedAtWork:(bool)arg1;
- (void)setHasCapturedOnShortTrip:(bool)arg1;
- (void)setHasCapturedOnTrip:(bool)arg1;
- (void)setHasContainsBaby:(bool)arg1;
- (void)setHasContainsChild:(bool)arg1;
- (void)setHasContainsCoWorker:(bool)arg1;
- (void)setHasContainsFamily:(bool)arg1;
- (void)setHasContainsFriends:(bool)arg1;
- (void)setHasContainsMyPet:(bool)arg1;
- (void)setHasContainsParent:(bool)arg1;
- (void)setHasContainsPartner:(bool)arg1;
- (void)setHasContainsPets:(bool)arg1;
- (void)setHasContainsSibling:(bool)arg1;
- (void)setHasContainsSocialGroup:(bool)arg1;
- (void)setHasContainsVIP:(bool)arg1;
- (void)setHasFaceCount:(bool)arg1;
- (void)setHasIsCapturedAtPrivateEvent:(bool)arg1;
- (void)setHasIsCapturedAtPublicEvent:(bool)arg1;
- (void)setHasIsCapturedOnHoliday:(bool)arg1;
- (void)setHasIsCapturedOnWeekend:(bool)arg1;
- (void)setHasIsContainedInActivity:(bool)arg1;
- (void)setHasIsContainedInChildActivity:(bool)arg1;
- (void)setHasIsContainedInOnThisDay:(bool)arg1;
- (void)setHasIsContainedInSharedAlbum:(bool)arg1;
- (void)setHasIsContainedInVisualTrend:(bool)arg1;
- (void)setHasIsCoupon:(bool)arg1;
- (void)setHasIsDocument:(bool)arg1;
- (void)setHasIsFavorite:(bool)arg1;
- (void)setHasIsMeme:(bool)arg1;
- (void)setHasIsReceipt:(bool)arg1;
- (void)setHasIsRecentEdit:(bool)arg1;
- (void)setHasIsRecentFavorite:(bool)arg1;
- (void)setHasIsRecentShare:(bool)arg1;
- (void)setHasIsRecentView:(bool)arg1;
- (void)setHasIsRecipe:(bool)arg1;
- (void)setHasIsScreenshot:(bool)arg1;
- (void)setHasUserHasHome:(bool)arg1;
- (void)setHasUserHasPet:(bool)arg1;
- (void)setHasUserHasVIP:(bool)arg1;
- (void)setHasUserNumFavorites:(bool)arg1;
- (void)setHasUserNumTrips:(bool)arg1;
- (void)setHasUserNumVIPPeople:(bool)arg1;
- (void)setHasUserisDAU:(bool)arg1;
- (id)userEvent;
- (bool)userHasHome;
- (bool)userHasPet;
- (bool)userHasVIP;
- (int)userLibraryAgeInDays;
- (int)userLibrarySize;
- (int)userNumFavorites;
- (int)userNumTrips;
- (int)userNumVIPPeople;
- (double)userisDAU;
- (void)writeTo:(id)arg1;

@end