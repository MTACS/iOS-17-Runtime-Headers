
@interface CUINamedLookup : NSObject <NSLocking> {
    unsigned int  _distilledInVersion;
    CUIRenditionKey * _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    unsigned int  _odContent;
    NSString * _signature;
    unsigned long long  _storageRef;
}

@property (nonatomic, readonly) bool _cacheRenditionProperties;
@property (nonatomic, readonly) unsigned int _distilledInVersion;
@property (nonatomic, readonly) CUIThemeRendition *_rendition;
@property (nonatomic, readonly) NSString *appearance;
@property (nonatomic, readonly) long long appearanceIdentifier;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) long long graphicsClass;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, copy) CUIRenditionKey *key;
@property (nonatomic, readonly) NSString *keySignature;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long localization;
@property (nonatomic, readonly) long long memoryClass;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CUIRenditionKey *renditionKey;
@property (nonatomic, readonly) NSString *renditionName;
@property (nonatomic, readonly) bool representsOnDemandContent;
@property (nonatomic, readonly) long long sizeClassHorizontal;
@property (nonatomic, readonly) long long sizeClassVertical;
@property (nonatomic) unsigned long long storageRef;
@property (nonatomic, readonly) unsigned long long subtype;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (bool)_cacheRenditionProperties;
- (unsigned int)_distilledInVersion;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)appearance;
- (long long)appearanceIdentifier;
- (void)dealloc;
- (long long)displayGamut;
- (long long)graphicsClass;
- (unsigned long long)hash;
- (long long)idiom;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTintable;
- (id)key;
- (id)keySignature;
- (long long)layoutDirection;
- (long long)localization;
- (void)lock;
- (long long)memoryClass;
- (id)name;
- (id)renditionKey;
- (id)renditionName;
- (bool)representsOnDemandContent;
- (void)setKey:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRepresentsOnDemandContent:(bool)arg1;
- (void)setStorageRef:(unsigned long long)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (unsigned long long)storageRef;
- (unsigned long long)subtype;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)configuration;

@end
