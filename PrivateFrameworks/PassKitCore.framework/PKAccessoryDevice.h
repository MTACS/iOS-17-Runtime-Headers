
@interface PKAccessoryDevice : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _dictionary;
    NSString * _endpointUUID;
    bool  _isMock;
    NSData * _primaryColorData;
    NSData * _secondaryColorData;
    NSNumber * _type;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSString *endpointUUID;
@property (nonatomic, readonly) bool isMock;
@property (nonatomic, retain) NSData *primaryColorData;
@property (nonatomic, retain) NSData *secondaryColorData;
@property (getter=isSleeve, nonatomic, readonly) bool sleeve;
@property (nonatomic, retain) NSNumber *type;

+ (id)mockAccessoryDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointUUID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2;
- (bool)isMock;
- (bool)isSleeve;
- (id)primaryColorData;
- (id)secondaryColorData;
- (void)setEndpointUUID:(id)arg1;
- (void)setPrimaryColorData:(id)arg1;
- (void)setSecondaryColorData:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
