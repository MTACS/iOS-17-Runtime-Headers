
@interface DNDSModeRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSUUID * _identifier;
    NSString * _modeIdentifier;
    NSString * _name;
    NSArray * _placeholderExcludedPlatforms;
    long long  _semanticType;
    NSString * _symbolImageName;
    NSString * _tintColorName;
    unsigned long long  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *placeholderExcludedPlatforms;
@property (nonatomic, readonly) long long semanticType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbolImageName;
@property (nonatomic, readonly, copy) NSString *tintColorName;
@property (nonatomic, readonly) unsigned long long visibility;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithRecord:(id)arg1;
- (id)_initWithSymbolImageName:(id)arg1 tintColorName:(id)arg2 name:(id)arg3 modeIdentifier:(id)arg4 semanticType:(long long)arg5 visibility:(unsigned long long)arg6 identifier:(id)arg7 placeholderExcludedPlatforms:(id)arg8;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)modeIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)placeholderExcludedPlatforms;
- (long long)semanticType;
- (id)symbolImageName;
- (id)tintColorName;
- (unsigned long long)visibility;

@end
