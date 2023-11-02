
@interface INHomeUserTaskResponse : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _taskOutcome;
    INHomeUserTask * _userTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long taskOutcome;
@property (nonatomic, readonly, copy) INHomeUserTask *userTask;

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
- (id)initWithUserTask:(id)arg1 taskOutcome:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)taskOutcome;
- (id)userTask;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
