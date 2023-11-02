
@interface EAEmailAddressParser : NSObject <EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_componentsForFullAddress:(id)arg1 rawAddressIndexes:(id*)arg2 localPartIndexes:(id*)arg3 domainIndexes:(id*)arg4;
+ (id)_stringByDecodingIDNAString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)_stringByEncodingIDNAString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)addressDomainFromAddress:(id)arg1;
+ (bool)addressIsEmptyGroup:(id)arg1;
+ (id)displayNameFromAddress:(id)arg1;
+ (id)displayNameFromAddress:(id)arg1 cacheResults:(bool)arg2;
+ (id)idnaDecodedAddressForAddress:(id)arg1;
+ (id)idnaEncodedAddressForAddress:(id)arg1;
+ (void)insertPreviousRoute:(unsigned short*)arg1 ofLength:(unsigned long long)arg2 toBuffer:(unsigned short**)arg3 ofLength:(unsigned long long)arg4 atPosition:(unsigned short*)arg5 addSpace:(bool)arg6;
+ (bool)isLegalEmailAddress:(id)arg1;
+ (id)localPartFromAddress:(id)arg1;
+ (id)log;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfAddressDomainFromAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1;
+ (id)rawAddressFromFullAddress:(id)arg1 cacheResults:(bool)arg2;
+ (id)rawAddressRespectingGroupsFromFullAddress:(id)arg1;

@end
