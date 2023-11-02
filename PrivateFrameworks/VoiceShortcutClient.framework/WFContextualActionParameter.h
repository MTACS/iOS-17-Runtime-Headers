
@interface WFContextualActionParameter : NSObject <NSSecureCoding> {
    bool  _actionInput;
    bool  _askEachTime;
    WFDisambiguationCollectionFilter * _askEachTimeCollectionFilter;
    NSString * _displayString;
    NSString * _type;
    NSString * _wfParameterKey;
    <WFPropertyListObject> * _wfSerializedRepresentation;
}

@property (getter=isActionInput, nonatomic, readonly) bool actionInput;
@property (getter=isAskEachTime, nonatomic, readonly) bool askEachTime;
@property (nonatomic, readonly, copy) WFDisambiguationCollectionFilter *askEachTimeCollectionFilter;
@property (nonatomic, readonly, copy) NSString *displayString;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *wfParameterKey;
@property (nonatomic, readonly) <WFPropertyListObject> *wfSerializedRepresentation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)askEachTimeCollectionFilter;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 displayString:(id)arg2 wfParameterKey:(id)arg3 askEachTime:(bool)arg4;
- (id)initWithType:(id)arg1 displayString:(id)arg2 wfParameterKey:(id)arg3 askEachTime:(bool)arg4 askEachTimeCollectionFilter:(id)arg5;
- (id)initWithType:(id)arg1 displayString:(id)arg2 wfParameterKey:(id)arg3 isActionInput:(bool)arg4;
- (id)initWithType:(id)arg1 displayString:(id)arg2 wfParameterKey:(id)arg3 wfSerializedRepresentation:(id)arg4;
- (id)initWithType:(id)arg1 displayString:(id)arg2 wfParameterKey:(id)arg3 wfSerializedRepresentation:(id)arg4 askEachTime:(bool)arg5 askEachTimeCollectionFilter:(id)arg6 actionInput:(bool)arg7;
- (bool)isActionInput;
- (bool)isAskEachTime;
- (bool)isEqual:(id)arg1;
- (id)type;
- (id)wfParameterKey;
- (id)wfSerializedRepresentation;

@end
