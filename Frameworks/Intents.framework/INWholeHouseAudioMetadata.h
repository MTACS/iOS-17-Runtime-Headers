
@interface INWholeHouseAudioMetadata : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSNumber * _hasExcept;
    NSArray * _intentDestinationSpeakers;
    NSArray * _intentPermanentNames;
    NSArray * _intentSpeakerNames;
    NSArray * _intentSpeakerRooms;
    NSNumber * _isAllSpeakers;
    NSNumber * _isInHere;
    NSNumber * _isParticipatingSpeaker;
    NSNumber * _isPauseOrStop;
    NSNumber * _isWholeHouseAudioCommand;
    NSNumber * _numberOfHomeAutomationWords;
    NSArray * _permanentNames;
    NSArray * _speakerNames;
    NSArray * _speakerRooms;
    NSArray * _spokenEntityNames;
    NSArray * _spokenEntityTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *hasExcept;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *intentDestinationSpeakers;
@property (nonatomic, readonly, copy) NSArray *intentPermanentNames;
@property (nonatomic, readonly, copy) NSArray *intentSpeakerNames;
@property (nonatomic, readonly, copy) NSArray *intentSpeakerRooms;
@property (nonatomic, readonly, copy) NSNumber *isAllSpeakers;
@property (nonatomic, readonly, copy) NSNumber *isInHere;
@property (nonatomic, readonly, copy) NSNumber *isParticipatingSpeaker;
@property (nonatomic, readonly, copy) NSNumber *isPauseOrStop;
@property (nonatomic, readonly, copy) NSNumber *isWholeHouseAudioCommand;
@property (nonatomic, readonly, copy) NSNumber *numberOfHomeAutomationWords;
@property (nonatomic, readonly, copy) NSArray *permanentNames;
@property (nonatomic, readonly, copy) NSArray *speakerNames;
@property (nonatomic, readonly, copy) NSArray *speakerRooms;
@property (nonatomic, readonly, copy) NSArray *spokenEntityNames;
@property (nonatomic, readonly, copy) NSArray *spokenEntityTypes;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hasExcept;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeakerNames:(id)arg1 speakerRooms:(id)arg2 permanentNames:(id)arg3 intentSpeakerNames:(id)arg4 intentSpeakerRooms:(id)arg5 intentDestinationSpeakers:(id)arg6 intentPermanentNames:(id)arg7 spokenEntityTypes:(id)arg8 spokenEntityNames:(id)arg9 numberOfHomeAutomationWords:(id)arg10 isAllSpeakers:(id)arg11 isPauseOrStop:(id)arg12 isWholeHouseAudioCommand:(id)arg13 isInHere:(id)arg14 hasExcept:(id)arg15 isParticipatingSpeaker:(id)arg16;
- (id)intentDestinationSpeakers;
- (id)intentPermanentNames;
- (id)intentSpeakerNames;
- (id)intentSpeakerRooms;
- (id)isAllSpeakers;
- (bool)isEqual:(id)arg1;
- (id)isInHere;
- (id)isParticipatingSpeaker;
- (id)isPauseOrStop;
- (id)isWholeHouseAudioCommand;
- (id)numberOfHomeAutomationWords;
- (id)permanentNames;
- (id)speakerNames;
- (id)speakerRooms;
- (id)spokenEntityNames;
- (id)spokenEntityTypes;

@end
