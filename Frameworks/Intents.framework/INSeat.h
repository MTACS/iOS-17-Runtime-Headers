
@interface INSeat : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _seatNumber;
    NSString * _seatRow;
    NSString * _seatSection;
    NSString * _seatingType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *seatNumber;
@property (nonatomic, readonly, copy) NSString *seatRow;
@property (nonatomic, readonly, copy) NSString *seatSection;
@property (nonatomic, readonly, copy) NSString *seatingType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeatSection:(id)arg1 seatRow:(id)arg2 seatNumber:(id)arg3 seatingType:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)seatNumber;
- (id)seatRow;
- (id)seatSection;
- (id)seatingType;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;

- (id)schema;

@end
