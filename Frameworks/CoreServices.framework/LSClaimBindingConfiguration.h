
@interface LSClaimBindingConfiguration : NSObject {
    bool  _addClaimRecordIfMissing;
    unsigned long long  _bundleClassMask;
    NSString * _typeIdentifier;
}

@property bool addClaimRecordIfMissing;
@property unsigned long long bundleClassMask;
@property (readonly) NSString *typeIdentifier;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (void).cxx_destruct;
- (bool)addClaimRecordIfMissing;
- (unsigned long long)bundleClassMask;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)setAddClaimRecordIfMissing:(bool)arg1;
- (void)setBundleClassMask:(unsigned long long)arg1;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (void)_LS_setAddClaimRecordIfMissing:(bool)arg1;

@end
