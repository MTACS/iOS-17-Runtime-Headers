
@interface CUIKAttendeeUtils : NSObject

+ (id)_contactForIdentity:(id)arg1 keys:(id)arg2;
+ (id)_displayStringForIdentityWithDecomposedName:(id)arg1 useAddressAsFallback:(bool)arg2 contactIdentifier:(id*)arg3 outFirstName:(id*)arg4 outLastName:(id*)arg5 outDepartment:(id*)arg6 useShortName:(bool)arg7;
+ (id)_filteredAttendeeName:(id)arg1 parenthesizedPart:(id*)arg2;
+ (id)contactForIdentity:(id)arg1 keys:(id)arg2 provider:(id)arg3;
+ (id)displayShortStringForIdentityWithDecomposedName:(id)arg1 useAddressAsFallback:(bool)arg2 contactIdentifier:(id*)arg3 outFirstName:(id*)arg4 outLastName:(id*)arg5 outDepartment:(id*)arg6;
+ (id)displayStringForIdentity:(id)arg1 useAddressAsFallback:(bool)arg2 contactIdentifier:(id*)arg3;
+ (id)displayStringForIdentityWithDecomposedName:(id)arg1 useAddressAsFallback:(bool)arg2 contactIdentifier:(id*)arg3 outFirstName:(id*)arg4 outLastName:(id*)arg5 outDepartment:(id*)arg6;
+ (id)sortEKParticipantsIgnoringNonHumans:(id)arg1 event:(id)arg2;
+ (id)sortEKParticipantsIgnoringNonHumans:(id)arg1 event:(id)arg2 includeOrganizer:(bool)arg3;
+ (id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1 event:(id)arg2;
+ (id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1 event:(id)arg2 includeOrganizer:(bool)arg3;

@end
