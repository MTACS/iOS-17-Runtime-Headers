
@interface WBSAddressBookMatch : NSObject <NSSecureCoding, WBSFormAutoFillItem> {
    NSString * _identifier;
    NSString * _key;
    NSString * _label;
    NSString * _property;
    NSString * _uniqueID;
    id  _value;
}

@property (nonatomic, readonly) NSString *completion;
@property (nonatomic, copy) NSDate *dateValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)addressBookMatchWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1;
- (id)completion;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 uniqueID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (id)property;
- (void)setDateValue:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)uniqueID;

@end
