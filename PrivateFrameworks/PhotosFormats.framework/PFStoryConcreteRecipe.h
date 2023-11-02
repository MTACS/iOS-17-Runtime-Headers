
@interface PFStoryConcreteRecipe : NSObject <PFStoryRecipe> {
    NSArray * _assets;
    NSDictionary * _autoEditDecisionLists;
    NSString * _contentIdentifier;
    <PFStoryRecipeStyle> * _currentStyle;
    NSString * _currentStyleIdentifier;
    NSArray * _libraries;
    long long  _majorVersion;
    long long  _minorVersion;
    struct { 
        long long kind; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } minimumDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } preferredDuration; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } maximumDuration; 
        } specificDurationInfo; 
    }  _overallDurationInfo;
    NSArray * _presentations;
    NSDictionary * _seedSongIdentifiersByCatalog;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly) NSDictionary *autoEditDecisionLists;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic, readonly, copy) <PFStoryRecipeStyle> *currentStyle;
@property (nonatomic, readonly, copy) <PFStoryRecipeSongAsset> *currentStyleSongAsset;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly, copy) NSArray *libraries;
@property (nonatomic, readonly) long long majorVersion;
@property (nonatomic, readonly) long long minorVersion;
@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) long long numberOfPresentations;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; } overallDurationInfo;
@property (nonatomic, readonly, copy) NSArray *presentations;
@property (nonatomic, readonly, copy) NSDictionary *seedSongIdentifiersByCatalog;

- (void).cxx_destruct;
- (bool)_isArray:(id)arg1 equalToArray:(id)arg2 usingObjectEquality:(id /* block */)arg3;
- (bool)_isDictionary:(id)arg1 equalToDictionary:(id)arg2 usingObjectEquality:(id /* block */)arg3;
- (id)assetAtIndex:(long long)arg1;
- (id)assetWithKind:(long long)arg1 identifier:(id)arg2;
- (id)assets;
- (id)autoEditDecisionLists;
- (id)contentIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStyle;
- (id)currentStyleSongAsset;
- (id)diagnosticDescription;
- (void)enumerateAssetsWithKind:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithContentIdentifier:(id)arg1 majorVersion:(long long)arg2 minorVersion:(long long)arg3 libraries:(id)arg4 assets:(id)arg5 overallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg6 currentStyle:(id)arg7 seedSongIdentifiersByCatalog:(id)arg8 autoDecisionLists:(id)arg9 presentations:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecipe:(id)arg1;
- (id)libraries;
- (id)libraryWithKind:(long long)arg1;
- (long long)majorVersion;
- (long long)minorVersion;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfAssets;
- (long long)numberOfPresentations;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })overallDurationInfo;
- (id)presentationAtIndex:(long long)arg1;
- (id)presentations;
- (id)seedSongAssetForCatalog:(id)arg1;
- (id)seedSongIdentifiersByCatalog;

@end
