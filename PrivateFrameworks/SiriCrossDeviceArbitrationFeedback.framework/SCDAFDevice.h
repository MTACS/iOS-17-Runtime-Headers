
@interface SCDAFDevice : NSObject <NSSecureCoding> {
    NSString * _assistantId;
    NSString * _build;
    NSArray * _deviceClass;
    NSString * _enclosureColor;
    NSString * _idsIdentifier;
    NSString * _locale;
    NSString * _name;
    NSArray * _productTypes;
    NSString * _roomName;
    NSString * _speechId;
}

@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *build;
@property (nonatomic, retain) NSArray *deviceClass;
@property (nonatomic, copy) NSString *enclosureColor;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *productTypes;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *speechId;

+ (id)arrayDictionaryRepresentation:(id)arg1;
+ (unsigned long long)deviceClassFromProductTypeString:(id)arg1;
+ (id)devicesArrayWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantId;
- (id)build;
- (id)description;
- (id)deviceClass;
- (id)dictionaryRepresentation;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)locale;
- (id)name;
- (id)productTypes;
- (id)roomName;
- (void)setAssistantId:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductTypes:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)speechId;

@end
