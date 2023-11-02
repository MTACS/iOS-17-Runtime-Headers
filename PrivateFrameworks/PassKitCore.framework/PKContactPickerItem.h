
@interface PKContactPickerItem : NSObject <NSSecureCoding> {
    NSMutableSet * _acceptedValues;
    NSArray * _alternativeAcceptedValues;
    NSString * _displayName;
    NSString * _submissionValue;
}

@property (nonatomic, readonly) NSArray *alternativeAcceptedValues;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *submissionValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedValues;
- (id)alternativeAcceptedValues;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isValueAccepted:(id)arg1;
- (id)submissionValue;

@end
