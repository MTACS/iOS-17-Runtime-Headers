
@interface AFCallStateSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    unsigned long long  _callState;
    bool  _isDropInCall;
    bool  _onSpeaker;
}

@property (nonatomic, readonly) unsigned long long callState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDropInCall;
@property (nonatomic, readonly) bool onSpeaker;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)ad_shortDescription;
- (id)buildDictionaryRepresentation;
- (unsigned long long)callState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCallState:(unsigned long long)arg1 onSpeaker:(bool)arg2 isDropInCall:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSerializedBackingStore:(id)arg1;
- (bool)isDropInCall;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)onSpeaker;
- (id)serializedBackingStore;

@end
