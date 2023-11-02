
@interface BMFrontBoardDisplayElement : BMEventBase <BMStoreData> {
    NSString * _bundleIdentifier;
    int  _changeType;
    BMFrontBoardDisplayElementDisplay * _display;
    int  _elementType;
    bool  _hasHasKeyboardFocus;
    bool  _hasIsUIApplicationElement;
    bool  _hasKeyboardFocus;
    bool  _hasLayoutRole;
    bool  _hasLevel;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _identifier;
    bool  _isUIApplicationElement;
    long long  _layoutRole;
    long long  _level;
    double  _raw_absoluteTimestamp;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMFrontBoardDisplayElementDisplay *display;
@property (nonatomic, readonly) int elementType;
@property (nonatomic) bool hasHasKeyboardFocus;
@property (nonatomic) bool hasIsUIApplicationElement;
@property (nonatomic, readonly) bool hasKeyboardFocus;
@property (nonatomic) bool hasLayoutRole;
@property (nonatomic) bool hasLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isUIApplicationElement;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) long long level;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)bundleIdentifier;
- (int)changeType;
- (unsigned int)dataVersion;
- (id)description;
- (id)display;
- (int)elementType;
- (bool)hasHasKeyboardFocus;
- (bool)hasIsUIApplicationElement;
- (bool)hasKeyboardFocus;
- (bool)hasLayoutRole;
- (bool)hasLevel;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 elementType:(int)arg4 layoutRole:(id)arg5 level:(id)arg6 hasKeyboardFocus:(id)arg7 isUIApplicationElement:(id)arg8 display:(id)arg9 changeType:(int)arg10;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isUIApplicationElement;
- (id)jsonDictionary;
- (long long)layoutRole;
- (long long)level;
- (id)serialize;
- (void)setHasHasKeyboardFocus:(bool)arg1;
- (void)setHasIsUIApplicationElement:(bool)arg1;
- (void)setHasLayoutRole:(bool)arg1;
- (void)setHasLevel:(bool)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor

- (bool)dk_isDuplicateOf:(id)arg1;

@end
