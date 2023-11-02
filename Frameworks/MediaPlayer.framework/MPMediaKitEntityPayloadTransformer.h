
@interface MPMediaKitEntityPayloadTransformer : NSObject {
    NSMutableDictionary * _attributes;
    NSString * _identifier;
    NSMutableDictionary * _meta;
    NSMutableDictionary * _relationships;
    NSString * _transformedType;
    NSString * _type;
}

@property (nonatomic, readonly) NSMutableDictionary *attributes;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSMutableDictionary *meta;
@property (nonatomic, readonly) NSMutableDictionary *relationships;
@property (nonatomic, readonly) NSDictionary *transformedPayload;
@property (nonatomic, readonly) NSString *transformedType;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)attributes;
- (id)identifier;
- (id)initWithType:(id)arg1 transformedType:(id)arg2;
- (id)meta;
- (id)relationships;
- (void)setIdentifier:(id)arg1;
- (id)transformedPayload;
- (id)transformedType;
- (id)type;

@end
