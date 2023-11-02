
@protocol NFACTag <NSObject>

@required

- (NSData *)UID;
- (NSDictionary *)asDictionary;
- (NSString *)description;
- (bool)isSilent;
- (unsigned int)ndefAvailability;
- (unsigned long long)ndefContainerSize;
- (unsigned long long)ndefMessageSize;
- (unsigned char)silentType;
- (NSData *)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
