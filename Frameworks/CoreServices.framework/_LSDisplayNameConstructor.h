
@interface _LSDisplayNameConstructor : NSObject {
    NSString * _baseName;
    NSString * _extension;
    unsigned int  _hadBiDiControlCharacter;
    unsigned int  _hadColonInFSName;
    unsigned int  _hadForbiddenCharacter;
    unsigned int  _hadNonASCIICharacter;
    unsigned int  _isApplication;
    unsigned int  _isFolder;
    NSString * _originalName;
    NSString * _secondaryExtension;
    unsigned int  _wantsHiddenExtension;
}

+ (id)concatenateBaseName:(id)arg1 andExtension:(id)arg2;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x1; }*)arg1 bundle:(unsigned int)arg2 bundleClass:(const unsigned int*)arg3 node:(id)arg4 preferredLocalizations:(id)arg5 error:(id*)arg6;
+ (id)displayNameConstructorWithContext:(struct LSContext { id x1; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 bundle:(unsigned int)arg2 bundleClass:(const unsigned int*)arg3 node:(id)arg4 preferredLocalizations:(id)arg5 error:(id*)arg6;
+ (id)displayNameConstructorWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x1; }*)arg1 bundle:(unsigned int)arg2 bundleClass:(const unsigned int*)arg3 node:(id)arg4 error:(id*)arg5;
+ (id)displayNameConstructorsWithContext:(struct LSContext { id x1; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 bundle:(unsigned int)arg2 bundleClass:(const unsigned int*)arg3 node:(id)arg4 error:(id*)arg5;
+ (id)displayNameConstructorsWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 node:(id)arg2 error:(id*)arg3;
+ (void)getExtensionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 secondaryExtensionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 fromFileName:(id)arg3 considerConfusables:(bool)arg4;
+ (unsigned char)prepareMimicWithPopulator:(id)arg1 error:(id*)arg2;
+ (void)setShowAllExtensions:(bool)arg1;
+ (void)setSuffixForRemoteXCTests:(id)arg1;
+ (bool)showAllExtensions;
+ (id)suffixForRemoteXCTests;

- (void).cxx_destruct;
- (bool)canSetExtensionHiddenWithContext:(struct LSContext { id x1; }*)arg1;
- (id)cleanSecondaryExtension:(id)arg1;
- (id)combineBaseName:(id)arg1 extension:(id)arg2;
- (void)getTransformedBaseName:(id*)arg1 extension:(id*)arg2 needsBiDiControlCharacters:(bool)arg3;
- (void)getUnlocalizedBaseName:(id*)arg1 extension:(id*)arg2 requiresAdditionalBiDiControlCharacters:(bool*)arg3;
- (id)init;
- (void)initContentBitsWithDisplayName:(id)arg1 treatAsFSName:(bool)arg2;
- (void)initNamePartsWithDisplayName:(id)arg1;
- (void)initNodeBitsWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 node:(id)arg2 isDirectory:(bool)arg3 bundleClass:(const unsigned int*)arg4;
- (id)initWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 node:(id)arg2 isDirectory:(bool)arg3 bundleClass:(const unsigned int*)arg4 desiredDisplayName:(id)arg5 treatAsFSName:(bool)arg6;
- (id)insertCompleteNameBiDiControlCharacters:(id)arg1;
- (id)insertNameComponentBiDiControlCharacters:(id)arg1;
- (bool)isStringNaturallyRTL:(id)arg1;
- (bool)mayHideExtensionWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1;
- (bool)showExtensionWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 asIfShowingAllExtensions:(id)arg2;
- (id)transformBeforeCombining:(id)arg1 needsBiDiControlCharacters:(bool*)arg2;
- (id)unlocalizedNameWithContext:(struct LSContext { id x1; }*)arg1;
- (id)unlocalizedNameWithContext:(struct LSContext { id x1; }*)arg1 asIfShowingAllExtensions:(id)arg2;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1;
- (id)unlocalizedNameWithContextIfNeeded:(struct Context { struct LSContext {} *x1; struct LSContext { id x_2_1_1; } x2; bool x3; id x4; }*)arg1 asIfShowingAllExtensions:(id)arg2;
- (bool)wantsHiddenExtension;

@end
