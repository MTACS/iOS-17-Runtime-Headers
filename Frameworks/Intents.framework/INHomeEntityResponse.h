
@interface INHomeEntityResponse : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    INHomeEntity * _entity;
    NSArray * _taskResponses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly, copy) INHomeEntity *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *taskResponses;

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
- (id)entity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntity:(id)arg1 taskResponses:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)taskResponses;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
