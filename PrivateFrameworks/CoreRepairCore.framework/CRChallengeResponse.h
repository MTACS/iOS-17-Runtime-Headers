
@interface CRChallengeResponse : NSObject <NSSecureCoding> {
    NSString * componentType;
    NSString * identifer;
    NSNumber * keyIndex;
    NSDictionary * properties;
    NSData * signedResponse;
}

@property (nonatomic, retain) NSString *componentType;
@property (nonatomic, retain) NSString *identifer;
@property (nonatomic, retain) NSNumber *keyIndex;
@property (nonatomic, retain) NSDictionary *properties;
@property (nonatomic, retain) NSData *signedResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)componentType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifer;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentType:(id)arg1 identifer:(id)arg2 signedResponse:(id)arg3 keyIndex:(id)arg4 properties:(id)arg5;
- (id)keyIndex;
- (id)properties;
- (void)setComponentType:(id)arg1;
- (void)setIdentifer:(id)arg1;
- (void)setKeyIndex:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSignedResponse:(id)arg1;
- (id)signedResponse;

@end
