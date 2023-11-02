
@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    long long  _emergencyType;
    long long  _faceTimeType;
    NSString * _label;
    bool  _suggested;
    long long  _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long emergencyType;
@property (nonatomic, readonly) long long faceTimeType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (getter=isSuggested, nonatomic, readonly) bool suggested;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (long long)emergencyType;
- (void)encodeWithCoder:(id)arg1;
- (long long)faceTimeType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 faceTimeType:(long long)arg5 suggested:(bool)arg6;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4 suggested:(bool)arg5;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 faceTimeType:(long long)arg4;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 suggested:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSuggested;
- (id)label;
- (long long)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

+ (id)__im_assistant_extractIntentHandleLabelAndTypeFromContact:(id)arg1 forNormalizedID:(id)arg2;
+ (long long)__im_assistant_handleTypeForString:(id)arg1;

- (long long)__im_assistant_handleType;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
