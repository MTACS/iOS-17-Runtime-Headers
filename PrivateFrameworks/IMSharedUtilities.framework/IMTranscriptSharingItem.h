
@interface IMTranscriptSharingItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSString * _otherCountryCode;
    NSString * _otherHandle;
    NSString * _otherUnformattedID;
}

@property (nonatomic, retain) NSString *otherCountryCode;
@property (nonatomic, retain) NSString *otherHandle;
@property (nonatomic, retain) NSString *otherUnformattedID;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherCountryCode;
- (id)otherHandle;
- (id)otherUnformattedID;
- (void)setOtherCountryCode:(id)arg1;
- (void)setOtherHandle:(id)arg1;
- (void)setOtherUnformattedID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_newChatItems;

@end
