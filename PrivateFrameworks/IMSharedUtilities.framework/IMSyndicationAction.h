
@interface IMSyndicationAction : NSObject <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    NSString * _chatGUID;
    unsigned char  _syndicationActionType;
    NSDate * _syndicationStartDate;
    unsigned char  _version;
}

@property (nonatomic, readonly, copy) NSString *chatGUID;
@property (nonatomic, readonly) unsigned char syndicatedItemType;
@property (nonatomic, readonly) unsigned char syndicationActionType;
@property (nonatomic, readonly) NSDate *syndicationStartDate;
@property (nonatomic, readonly) unsigned char version;

+ (id)dateFromNanoSeconds:(id)arg1;
+ (id)nanoSecondsFromDate:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unarchiveClasses;

- (void).cxx_destruct;
- (id)_stringFromActionType:(unsigned char)arg1;
- (id)_stringFromItemType:(unsigned char)arg1;
- (id)chatGUID;
- (id)copyDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)init;
- (id)initWithChatGUID:(id)arg1 syndicationStartDate:(id)arg2 syndicationActionType:(unsigned char)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)syndicatedItemType;
- (unsigned char)syndicationActionType;
- (id)syndicationStartDate;
- (unsigned char)version;

@end
