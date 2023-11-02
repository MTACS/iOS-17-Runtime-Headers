
@interface USOSerializedGraphNode : NSObject <NSSecureCoding> {
    NSString * _entityLabel;
    NSNumber * _integerPayload;
    NSArray * _normalizedStringPayloads;
    NSString * _stringPayload;
    int  _usoElementId;
    NSNumber * _usoVerbId;
    NSString * _verbLabel;
}

@property (nonatomic, retain) NSString *entityLabel;
@property (nonatomic, retain) NSNumber *integerPayload;
@property (nonatomic, retain) NSArray *normalizedStringPayloads;
@property (nonatomic, retain) NSString *stringPayload;
@property int usoElementId;
@property (nonatomic, retain) NSNumber *usoVerbId;
@property (nonatomic, retain) NSString *verbLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsoElementId:(int)arg1;
- (id)integerPayload;
- (id)normalizedStringPayloads;
- (void)setEntityLabel:(id)arg1;
- (void)setIntegerPayload:(id)arg1;
- (void)setNormalizedStringPayloads:(id)arg1;
- (void)setStringPayload:(id)arg1;
- (void)setUsoElementId:(int)arg1;
- (void)setUsoVerbId:(id)arg1;
- (void)setVerbLabel:(id)arg1;
- (id)stringPayload;
- (int)usoElementId;
- (id)usoVerbId;
- (id)verbLabel;

@end
