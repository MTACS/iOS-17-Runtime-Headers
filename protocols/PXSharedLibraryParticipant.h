
@protocol PXSharedLibraryParticipant <NSObject, NSCopying>

@required

- (NSString *)emailAddress;
- (<PXSharedLibraryImageProvider> *)imageProvider;
- (bool)isCurrentUser;
- (NSString *)localIdentifier;
- (NSPersonNameComponents *)nameComponents;
- (<PXPerson> *)person;
- (NSString *)phoneNumber;
- (long long)status;

@end
