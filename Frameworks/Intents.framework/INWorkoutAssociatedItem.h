
@interface INWorkoutAssociatedItem : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _contentRating;
    NSString * _itemID;
    long long  _itemLabel;
    INSpeakableString * _itemName;
}

@property (nonatomic, readonly) long long contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly) long long itemLabel;
@property (nonatomic, readonly, copy) INSpeakableString *itemName;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemLabel:(long long)arg1 itemID:(id)arg2 contentRating:(long long)arg3 itemName:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (long long)itemLabel;
- (id)itemName;

@end
