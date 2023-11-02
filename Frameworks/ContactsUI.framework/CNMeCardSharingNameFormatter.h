
@interface CNMeCardSharingNameFormatter : NSObject {
    NSMutableDictionary * _cachedFormattedNames;
    NSPersonNameComponents * _nameComponents;
    <CNMeCardSharingNameProvider> * _nameProvider;
}

@property (nonatomic, retain) NSMutableDictionary *cachedFormattedNames;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (nonatomic, readonly) <CNMeCardSharingNameProvider> *nameProvider;

+ (id)formattedNameFromComponents:(id)arg1 forProvider:(id)arg2 withFormat:(unsigned long long)arg3;
+ (id)formattedNameFromProvider:(id)arg1 withFormat:(unsigned long long)arg2;
+ (id)nameComponentsFromProvider:(id)arg1;

- (void).cxx_destruct;
- (id)cachedFormattedNames;
- (id)formattedNameWithFormat:(unsigned long long)arg1;
- (id)initWithNameProvider:(id)arg1;
- (id)nameComponents;
- (id)nameProvider;
- (void)setCachedFormattedNames:(id)arg1;

@end
