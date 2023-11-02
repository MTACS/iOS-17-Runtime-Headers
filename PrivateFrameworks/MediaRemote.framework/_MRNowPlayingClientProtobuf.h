
@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSMutableArray * _extendedBundleIdentifierHierarchys;
    struct { 
        unsigned int nowPlayingVisibility : 1; 
        unsigned int processIdentifier : 1; 
        unsigned int processUserIdentifier : 1; 
        unsigned int isEmptyDeprecated : 1; 
    }  _has;
    NSString * _iconURL;
    bool  _isEmptyDeprecated;
    int  _nowPlayingVisibility;
    NSString * _parentApplicationBundleIdentifier;
    int  _processIdentifier;
    int  _processUserIdentifier;
    _MRColorProtobuf * _tintColor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSMutableArray *extendedBundleIdentifierHierarchys;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasIconURL;
@property (nonatomic) bool hasIsEmptyDeprecated;
@property (nonatomic) bool hasNowPlayingVisibility;
@property (nonatomic, readonly) bool hasParentApplicationBundleIdentifier;
@property (nonatomic) bool hasProcessIdentifier;
@property (nonatomic) bool hasProcessUserIdentifier;
@property (nonatomic, readonly) bool hasTintColor;
@property (nonatomic, retain) NSString *iconURL;
@property (nonatomic) bool isEmptyDeprecated;
@property (nonatomic) int nowPlayingVisibility;
@property (nonatomic, retain) NSString *parentApplicationBundleIdentifier;
@property (nonatomic) int processIdentifier;
@property (nonatomic) int processUserIdentifier;
@property (nonatomic, retain) _MRColorProtobuf *tintColor;

+ (Class)extendedBundleIdentifierHierarchyType;

- (void).cxx_destruct;
- (int)StringAsNowPlayingVisibility:(id)arg1;
- (void)addExtendedBundleIdentifierHierarchy:(id)arg1;
- (id)bundleIdentifier;
- (void)clearExtendedBundleIdentifierHierarchys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)extendedBundleIdentifierHierarchyAtIndex:(unsigned long long)arg1;
- (id)extendedBundleIdentifierHierarchys;
- (unsigned long long)extendedBundleIdentifierHierarchysCount;
- (bool)hasBundleIdentifier;
- (bool)hasDisplayName;
- (bool)hasIconURL;
- (bool)hasIsEmptyDeprecated;
- (bool)hasNowPlayingVisibility;
- (bool)hasParentApplicationBundleIdentifier;
- (bool)hasProcessIdentifier;
- (bool)hasProcessUserIdentifier;
- (bool)hasTintColor;
- (unsigned long long)hash;
- (id)iconURL;
- (bool)isEmptyDeprecated;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)nowPlayingVisibility;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (id)parentApplicationBundleIdentifier;
- (int)processIdentifier;
- (int)processUserIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExtendedBundleIdentifierHierarchys:(id)arg1;
- (void)setHasIsEmptyDeprecated:(bool)arg1;
- (void)setHasNowPlayingVisibility:(bool)arg1;
- (void)setHasProcessIdentifier:(bool)arg1;
- (void)setHasProcessUserIdentifier:(bool)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIsEmptyDeprecated:(bool)arg1;
- (void)setNowPlayingVisibility:(int)arg1;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setProcessIdentifier:(int)arg1;
- (void)setProcessUserIdentifier:(int)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)writeTo:(id)arg1;

@end
