
@interface INMediaSearch : NSObject <CMSCoding, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _albumName;
    NSString * _artistName;
    NSArray * _genreNames;
    NSString * _mediaIdentifier;
    NSString * _mediaName;
    long long  _mediaType;
    NSArray * _moodNames;
    long long  _reference;
    INDateComponentsRange * _releaseDate;
    long long  _sortOrder;
}

@property (nonatomic, readonly, copy) NSArray *activityNames;
@property (nonatomic, readonly, copy) NSString *albumName;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *genreNames;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mediaIdentifier;
@property (nonatomic, readonly, copy) NSString *mediaName;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly, copy) NSArray *moodNames;
@property (nonatomic, readonly) long long reference;
@property (nonatomic, readonly, copy) INDateComponentsRange *releaseDate;
@property (nonatomic, readonly) long long sortOrder;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)activityNames;
- (id)albumName;
- (id)artistName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)genreNames;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)mediaIdentifier;
- (id)mediaName;
- (long long)mediaType;
- (id)moodNames;
- (long long)reference;
- (id)releaseDate;
- (long long)sortOrder;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

@end
