
@interface LNStaticDeferredLocalizedString : NSObject <LNStaticDeferredLocalizedString, NSCopying, NSSecureCoding, WFVariableSerialization> {
    NSURL * _bundleURL;
    NSString * _defaultValue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _getterLock;
    NSString * _key;
    _NSLocalizedStringResource * _localizedStringResource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _localizedStringResourceLock;
    NSString * _table;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *localizedKey;
@property (nonatomic, readonly) _NSLocalizedStringResource *localizedStringResource;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *table;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresenation;
- (id)_init;
- (id)_initWithDictionary:(id)arg1;
- (id)bundleIdentifier;
- (id)bundleURL;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultValue;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 bundleURL:(id)arg4;
- (id)initWithKey:(id)arg1 table:(id)arg2 bundleURL:(id)arg3;
- (id)initWithLocalizedKey:(id)arg1 bundleIdentifier:(id)arg2 bundleURL:(id)arg3 table:(id)arg4;
- (id)initWithLocalizedStringResource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned long long)length;
- (id)localizedKey;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringResource;
- (id)localizedStringWithPluralizationNumber:(id)arg1 forLocaleIdentifier:(id)arg2;
- (id)localizedStringWithReplacements:(id)arg1 forLocaleIdentifier:(id)arg2;
- (id)table;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)serializedRepresentation;
- (void)wf_getLocalizedStringWithCompletionHandler:(id /* block */)arg1;
- (id)wf_localizedString;

@end
