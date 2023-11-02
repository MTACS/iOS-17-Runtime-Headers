
@interface INTimer : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    double  _duration;
    NSString * _identifier;
    INSpeakableString * _label;
    double  _remainingTime;
    long long  _state;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5 type:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)label;
- (double)remainingTime;
- (long long)state;
- (long long)type;

@end
