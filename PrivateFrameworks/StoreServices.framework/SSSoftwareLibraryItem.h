
@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding> {
    bool  _beta;
    NSMutableDictionary * _etags;
    bool  _launchProhibited;
    bool  _placeholder;
    bool  _profileValidated;
    NSMutableDictionary * _propertyValues;
}

@property (getter=isBeta, nonatomic) bool beta;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLaunchProhibited, nonatomic) bool launchProhibited;
@property (getter=isPlaceholder, nonatomic) bool placeholder;
@property (getter=isProfileValidated, nonatomic) bool profileValidated;
@property (readonly) Class superclass;

- (id)ETagForAssetType:(id)arg1;
- (id)_initWithITunesMetadata:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBeta;
- (bool)isLaunchProhibited;
- (bool)isPlaceholder;
- (bool)isProfileValidated;
- (void)setBeta:(bool)arg1;
- (bool)setETag:(id)arg1 forAssetType:(id)arg2 error:(id*)arg3;
- (void)setLaunchProhibited:(bool)arg1;
- (void)setPlaceholder:(bool)arg1;
- (void)setProfileValidated:(bool)arg1;
- (id)valueForProperty:(id)arg1;

@end