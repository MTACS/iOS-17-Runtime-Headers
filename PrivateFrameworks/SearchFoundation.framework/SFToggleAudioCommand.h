
@interface SFToggleAudioCommand : SFCommand <NSCopying, NSSecureCoding, SFToggleAudioCommand> {
    struct { 
        unsigned int mediaEntityType : 1; 
    }  _has;
    NSString * _localMediaIdentifier;
    int  _mediaEntityType;
    NSString * _persistentIdentifier;
    NSString * _universalLibraryIdentifier;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *universalLibraryIdentifier;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMediaEntityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)localMediaIdentifier;
- (int)mediaEntityType;
- (id)persistentIdentifier;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setMediaEntityType:(int)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setUniversalLibraryIdentifier:(id)arg1;
- (id)universalLibraryIdentifier;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

@end
