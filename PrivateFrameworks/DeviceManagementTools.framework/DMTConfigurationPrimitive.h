
@interface DMTConfigurationPrimitive : NSObject <DMTConfigurationProfilePayload> {
    NSString * _displayName;
    NSString * _identifier;
    NSDictionary * _rawDictionary;
    NSString * _type;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)displayName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)rawDictionary;
- (id)type;
- (id)uuid;

@end
